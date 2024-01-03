#pragma once

#include "AppEvent.h"
#include "AppTask.h"
#include "LEDWidget.h"
#include <platform/CHIPDeviceLayer.h>
#include "driver/touch_pad.h"
//#include "soc/rtc_periph.h"
#include "soc/sens_periph.h"
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

// Application-defined error codes in the CHIP_ERROR space.
#define APP_ERROR_EVENT_QUEUE_FAILED CHIP_APPLICATION_ERROR(0x01)
#define APP_ERROR_CREATE_TASK_FAILED CHIP_APPLICATION_ERROR(0x02)
#define APP_ERROR_UNHANDLED_EVENT CHIP_APPLICATION_ERROR(0x03)

#define TOUCHPAD_FILTER_TOUCH_PERIOD 10     // Period in ms

extern LEDWidget AppLED;

class ButtonTask
{

public:
    CHIP_ERROR StartButtonTask();
    CHIP_ERROR Init(AppEvent *aEvent);
    static void ButtonTaskMain(void * pvParameter);
    static void ButtonActionEventHandler(AppEvent *aEvent);
    static void button_rtc_intr(void *arg);

private:
    friend ButtonTask & GetButtonTask(void);
    static void button_set_thresholds(AppEvent *aEvent);
    static void ButtonBothPressedAction(AppEvent *aEvent, LEDWidget *led);
    static void ButtonBrightnessIncreaseAction(AppEvent *aEvent, LEDWidget *led, const uint8_t &change);
    static void ButtonBrightnessDecreaseAction(AppEvent *aEvent, LEDWidget *led, const uint8_t &change);
    
    static ButtonTask sButtonTask;
};

inline ButtonTask & GetButtonTask(void)
{
    return ButtonTask::sButtonTask;
}