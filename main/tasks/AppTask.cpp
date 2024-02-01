/*
 *    Copyright 2024 Ziv Low
 *    
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *    
 *        http://www.apache.org/licenses/LICENSE-2.0
 *    
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "AppTask.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include <app-common/zap-generated/attributes/Accessors.h>

#define APP_TASK_NAME "APP-TASK"
#define APP_EVENT_QUEUE_SIZE 10
#define APP_TASK_STACK_SIZE 4096

using namespace ::chip;
using namespace ::chip::app;
using namespace ::chip::Credentials;
using namespace ::chip::DeviceLayer;

static const char *const TAG = "app-task";
static constexpr EndpointId kLightEndpointId = 1;
static constexpr EndpointId kElectricalMeasurementEndpointId = 2;
QueueHandle_t sAppEventQueue;
static TaskHandle_t sAppTaskHandle;

LEDWidget AppLED;
AppTask AppTask::sAppTask;

CHIP_ERROR AppTask::StartAppTask()
{
    esp_log_level_set(TAG, ESP_LOG_DEBUG);

    sAppEventQueue = xQueueCreate(APP_EVENT_QUEUE_SIZE, sizeof(AppEvent));
    if (sAppEventQueue == NULL)
    {
        ESP_LOGE(TAG, "Failed to allocate app event queue");
        return APP_ERROR_EVENT_QUEUE_FAILED;
    }

    // Start App task.
    BaseType_t xReturned;
    xReturned = xTaskCreate(&AppTaskMain, APP_TASK_NAME, APP_TASK_STACK_SIZE, NULL, 1, &sAppTaskHandle);
    return (xReturned == pdPASS) ? CHIP_NO_ERROR : APP_ERROR_CREATE_TASK_FAILED;
}

CHIP_ERROR AppTask::Init()
{
    CHIP_ERROR err = CHIP_NO_ERROR;

    AppLED.Init();

    return err;
}

void AppTask::AppTaskMain(void * pvParameter)
{
    AppEvent event;
    CHIP_ERROR err = sAppTask.Init();
    if (err != CHIP_NO_ERROR)
    {
        ESP_LOGI(TAG, "AppTask.Init() failed due to %" CHIP_ERROR_FORMAT, err.Format());
        return;
    }

    ESP_LOGI(TAG, "App Task Main started");

    while (true)
    {
        BaseType_t eventReceived = xQueueReceive(sAppEventQueue, &event, pdMS_TO_TICKS(10));
        while (eventReceived == pdTRUE)
        {
            sAppTask.DispatchEvent(event);
            eventReceived = xQueueReceive(sAppEventQueue, &event, 0); // return immediately if the queue is empty
        }
    }
}

void AppTask::PostEvent(const AppEvent &aEvent)
{
    if (sAppEventQueue == NULL)
    {
        ESP_LOGE(TAG, "Event Queue is NULL. Please initialize sAppEventQueue");
        return;
    }

    BaseType_t status;

    if (xPortInIsrContext())
    {
        BaseType_t higherPrioTaskWoken = pdFALSE;
        status                         = xQueueSendFromISR(sAppEventQueue, &aEvent, &higherPrioTaskWoken);
    }
    else
    {
        status = xQueueSend(sAppEventQueue, &aEvent, 1);
    }
    if (!status)
        ESP_LOGE(TAG, "Failed to post event to app task event queue");
}

void AppTask::DispatchEvent(const AppEvent &aEvent)
{
    if (aEvent.mHandler == NULL)
    {
        ESP_LOGE(TAG, "Event received with no handler. Dropping event.");
        return;
    }

    aEvent.mHandler(aEvent);
}

void AppTask::ButtonEventHandler(const ButtonEvent &aButtonState)
{
    AppEvent event;
    event.mButtonEvent = aButtonState;
    event.mHandler = LightingActionEventHandler;
    PostEvent(event);
}

void AppTask::LightEventHandler()
{
    AppEvent event;
    //event->mLightEvent = aLightState;
    event.mHandler = LightingActionEventHandler;
    PostEvent(event);
}

void AppTask::CurrentSensorEventHandler(const CurrentSensorEvent &aCurrentSensorState)
{
    AppEvent event;
    event.mCurrentSensorEvent = aCurrentSensorState;
    event.mHandler = CurrentSensorActionEventHandler;
    PostEvent(event);
}

void AppTask::LightingActionEventHandler(const AppEvent &aEvent)
{
    chip::DeviceLayer::PlatformMgr().LockChipStack();
    GetAppTask().UpdateLightingClusterState();
    chip::DeviceLayer::PlatformMgr().UnlockChipStack();
}

void AppTask::UpdateLightingClusterState()
{
    ESP_LOGI(TAG, "Writing to OnOff cluster");
    // write the new on/off value
    EmberAfStatus status = Clusters::OnOff::Attributes::OnOff::Set(kLightEndpointId, AppLED.IsTurnedOn());

    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        ESP_LOGE(TAG, "Updating on/off cluster failed: %x", status);
    }

    ESP_LOGI(TAG, "Writing to Current Level cluster");
    status = Clusters::LevelControl::Attributes::CurrentLevel::Set(kLightEndpointId, AppLED.GetLevel());

    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        ESP_LOGE(TAG, "Updating level cluster failed: %x", status);
    }
}

void AppTask::CurrentSensorActionEventHandler(const AppEvent &aEvent)
{
    chip::DeviceLayer::PlatformMgr().LockChipStack();
    GetAppTask().UpdateElectricalMeasurementClusterState(aEvent);
    chip::DeviceLayer::PlatformMgr().UnlockChipStack();

    ESP_LOGD(TAG, "Bus voltage: %" PRIi16 " mV", aEvent.mCurrentSensorEvent.DcVoltage);
    ESP_LOGD(TAG, "Shunt current: %" PRIi16 " mA", aEvent.mCurrentSensorEvent.DcCurrent);
    ESP_LOGD(TAG, "Power: %" PRIi16 " mW", aEvent.mCurrentSensorEvent.DcPower);
}

void AppTask::UpdateElectricalMeasurementClusterState(const AppEvent &aEvent)
{
    using namespace chip::app::Clusters::ElectricalMeasurement::Attributes;

    ESP_LOGI(TAG, "Writing to Electrical Measurement cluster");
    // Set new DC voltage
    EmberAfStatus status = DcVoltage::Set(kElectricalMeasurementEndpointId, aEvent.mCurrentSensorEvent.DcVoltage);

    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        ESP_LOGE(TAG, "Updating electrical measurement cluster, Attribute DC Voltage, failed: %x", status);
    }

    // Set new DC current
    status = DcCurrent::Set(kElectricalMeasurementEndpointId, aEvent.mCurrentSensorEvent.DcCurrent);

    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        ESP_LOGE(TAG, "Updating electrical measurement cluster, Attribute DC Current, failed: %x", status);
    }

    // Set new DC power
    status = DcPower::Set(kElectricalMeasurementEndpointId, aEvent.mCurrentSensorEvent.DcPower);

    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        ESP_LOGE(TAG, "Updating electrical measurement cluster, Attribute DC Power, failed: %x", status);
    }
}