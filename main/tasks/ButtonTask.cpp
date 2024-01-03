#include "ButtonTask.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"
#include "esp_log.h"
#include "esp_err.h"
#include <ranges>

static const char *const TAG = "button-task";
static TaskHandle_t sButtonTaskHandle;
static EventGroupHandle_t sButtonEventGroup;

ButtonTask ButtonTask::sButtonTask;

CHIP_ERROR ButtonTask::StartButtonTask()
{
    esp_log_level_set(TAG, ESP_LOG_DEBUG);

    sButtonEventGroup = xEventGroupCreate();
    if (sButtonEventGroup == NULL)
    {
        ESP_LOGE(TAG, "Failed to allocate button event group");
        return APP_ERROR_EVENT_QUEUE_FAILED;
    }

    // Start Button task.
    BaseType_t xReturned;
    xReturned = xTaskCreate(&ButtonTaskMain, "Button Task Main", 4096, NULL, 1, &sButtonTaskHandle);
    return (xReturned == pdPASS) ? CHIP_NO_ERROR : APP_ERROR_CREATE_TASK_FAILED;
}

CHIP_ERROR ButtonTask::Init(AppEvent *aEvent)
{
    CHIP_ERROR err = CHIP_NO_ERROR;

    // Initialize touch pad peripheral, it will start a timer to run a filter
    ESP_LOGI(TAG, "Initializing touch pad");
    ESP_ERROR_CHECK(touch_pad_init());
    // If use interrupt trigger mode, should set touch sensor FSM mode at 'TOUCH_FSM_MODE_TIMER'.
    touch_pad_set_fsm_mode(TOUCH_FSM_MODE_TIMER);
    // Set reference voltage for charging/discharging
    // For most usage scenarios, we recommend using the following combination:
    // the high reference valtage will be 2.7V - 1V = 1.7V, The low reference voltage will be 0.5V.
    touch_pad_set_voltage(TOUCH_HVOLT_2V7, TOUCH_LVOLT_0V5, TOUCH_HVOLT_ATTEN_1V);

    // t_sleep = sleep_cycle / SOC_CLK_RC_SLOW_FREQ_APPROX. SOC_CLK_RC_SLOW_FREQ_APPROX=150000. sleep_cycle [0, 0xFFFF]. Max 0.4369sec
    // t_meas = meas_cycle / SOC_CLK_RC_FAST_FREQ_APPROX. SOC_CLK_RC_FAST_FREQ_APPROX=8500000. meas_cycle [0, 0xFFFF]
    touch_pad_set_meas_time(0.25*SOC_CLK_RC_SLOW_FREQ_APPROX, 20000);

    uint16_t sleep_cycle, meas_cycle;

    touch_pad_get_meas_time(&sleep_cycle, &meas_cycle);
    ESP_LOGD(TAG, "sleep_cycle is %" PRIu16 ", meas_cycle is %" PRIu16, sleep_cycle, meas_cycle);

    // Init touch pad IO
    for (const auto& [idx, button_enabled] : aEvent->pButtonEvent->ButtonEnabled | std::views::enumerate | std::views::as_const)
        if (button_enabled) touch_pad_config(static_cast<touch_pad_t>(idx), 0);
    // Initialize and start a software filter to detect slight change of capacitance.
    touch_pad_filter_start(TOUCHPAD_FILTER_TOUCH_PERIOD);
    // Set thresh hold
    button_set_thresholds(aEvent);
    aEvent->mHandler = GetAppTask().LightingActionEventHandler;
    // Register touch interrupt ISR
    esp_err_t esp_err = touch_pad_isr_register(button_rtc_intr, aEvent);
    if (esp_err != ESP_OK)
    {
        ESP_LOGE(TAG, "touch pad isr register error %d", esp_err);
        return err;
    }
    //interrupt mode, enable touch interrupt
    touch_pad_intr_enable();

    return err;
}

/*
  Read values sensed at all available touch pads.
  Use 2 / 3 of read value as the threshold
  to trigger interrupt when the pad is touched.
  Note: this routine demonstrates a simple way
  to configure activation threshold for the touch pads.
  Do not touch any pads when this routine
  is running (on application start).
 */
void ButtonTask::button_set_thresholds(AppEvent *aEvent)
{
    uint16_t touch_value;

    for (const auto& [idx, button_enabled] : aEvent->pButtonEvent->ButtonEnabled | std::views::enumerate | std::views::as_const)
    {
        if (button_enabled)
        {
            touch_pad_read_filtered(static_cast<touch_pad_t>(idx), &touch_value);
            ESP_LOGD(TAG, "button_set_threshold: touch pad [%d] val is %d", idx, touch_value);
            ESP_ERROR_CHECK(touch_pad_set_thresh(static_cast<touch_pad_t>(idx), touch_value * 2 / 3));
        }
    }
}

/*
  Handle an interrupt triggered when a pad is touched.
  Recognize what pad has been touched and save it in a table.
 */
void ButtonTask::button_rtc_intr(void *arg)
{
    uint32_t pad_intr = touch_pad_get_status();
    //clear interrupt
    touch_pad_clear_status();

    if (sButtonEventGroup != NULL)
    {
        BaseType_t status;
        if (xPortInIsrContext())
        {
            BaseType_t xHigherPriorityTaskWoken = pdFALSE;
            status = xEventGroupSetBitsFromISR(sButtonEventGroup, pad_intr, &xHigherPriorityTaskWoken);

            if (xHigherPriorityTaskWoken)
            {
                portYIELD_FROM_ISR();
            }
        }
        else
        {
            EventBits_t uxBits = xEventGroupSetBits(sButtonEventGroup, pad_intr);

            if ((uxBits & pad_intr) == pad_intr)
            {
                status = pdTRUE;
            }
            else
            {
                status = pdFALSE;
            }
        }
        if (!status)
            ESP_LOGE(TAG, "Failed to set bits to Button Event Group");

    }
    else
    {
        ESP_LOGE(TAG, "Button Event Group is NULL should never happen");
    }
}

void ButtonTask::ButtonTaskMain(void * pvParameter)
{
    AppEvent *aEvent = new AppEvent();
    aEvent->pButtonEvent = new ButtonEvent();

    // Config enable Button8 & Button9
    aEvent->pButtonEvent->ButtonEnabled[8] = true;
    aEvent->pButtonEvent->ButtonEnabled[9] = true;

    CHIP_ERROR err = sButtonTask.Init(aEvent);
    if (err != CHIP_NO_ERROR)
    {
        ESP_LOGI(TAG, "ButtonTask.Init() failed due to %" CHIP_ERROR_FORMAT, err.Format());
        delete aEvent;
        return;
    }

    ESP_LOGI(TAG, "Button Task Main started");

    // Change brightness value by 30 per switch
    const uint8_t change = 30;
    EventBits_t uxBits;

    while (true) {

        uxBits = xEventGroupWaitBits(
                    sButtonEventGroup,   /* The event group being tested. */
                    (1 << 8) | (1 << 9), /* The bits within the event group to wait for. */
                    pdTRUE,        /* Waiting bits should be cleared before returning. */
                    pdFALSE,       /* pdFALSE=Don't wait for both bits, either bit will do. */
                    portMAX_DELAY );/* How to long to wait for either bit to be set. */

        aEvent->pButtonEvent->ButtonStateRaw = uxBits;

        if (aEvent->pButtonEvent->ButtonState.Button8 && aEvent->pButtonEvent->ButtonState.Button9){
            ButtonBothPressedAction(aEvent, &AppLED);
        }
        else if (aEvent->pButtonEvent->ButtonState.Button9){
            ButtonBrightnessIncreaseAction(aEvent, &AppLED, change);
        }
        else if (aEvent->pButtonEvent->ButtonState.Button8){
            ButtonBrightnessDecreaseAction(aEvent, &AppLED, change);
        }

        aEvent->pButtonEvent->ButtonStateRaw = 0;
    }
}

void ButtonTask::ButtonBothPressedAction(AppEvent *aEvent, LEDWidget *led)
{
    ESP_LOGI(TAG, "Both Buttons Pressed!");

    if (led->IsTurnedOn() == false){
        led->SetBrightness(0.5*UINT8_MAX);
    }

    led->Toggle();

    GetAppTask().PostEvent(aEvent);
}

void ButtonTask::ButtonBrightnessIncreaseAction(AppEvent *aEvent, LEDWidget *led, const uint8_t &change)
{
    ESP_LOGI(TAG, "Button Brightness Increase Pressed!");

    uint8_t oldBrightness = led->GetLevel();

    if (led->IsTurnedOn() == true)
    {
        uint8_t newBrightness = led->IncreaseBrightness(change);

        if (newBrightness == oldBrightness)
        {
            return;
        }
    }
    else
    {
        led->Toggle();
    }

    GetAppTask().PostEvent(aEvent);
}

void ButtonTask::ButtonBrightnessDecreaseAction(AppEvent *aEvent, LEDWidget *led, const uint8_t &change)
{
    ESP_LOGI(TAG, "Button Brightness Decrease Pressed!");

    if (led->IsTurnedOn() == false)
    {
        ESP_LOGW(TAG, "Light is already turned off!");
        return;
    }

    uint8_t oldBrightness = led->GetLevel();
    uint8_t newBrightness = led->DecreaseBrightness(change);

    if (newBrightness == oldBrightness)
    {
        return;
    }

    if (newBrightness == 0)
    {
        led->Toggle();
    }

    GetAppTask().PostEvent(aEvent);
}