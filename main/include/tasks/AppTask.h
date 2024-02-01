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

#pragma once

#include <stdint.h>
#include "AppEvent.h"
#include "LEDWidget.h"
#include <platform/CHIPDeviceLayer.h>

// Application-defined error codes in the CHIP_ERROR space.
#define APP_ERROR_EVENT_QUEUE_FAILED CHIP_APPLICATION_ERROR(0x01)
#define APP_ERROR_CREATE_TASK_FAILED CHIP_APPLICATION_ERROR(0x02)
#define APP_ERROR_UNHANDLED_EVENT CHIP_APPLICATION_ERROR(0x03)

extern LEDWidget AppLED;

class AppTask
{

public:
    CHIP_ERROR StartAppTask();
    static void AppTaskMain(void * pvParameter);
    void PostEvent(const AppEvent &aEvent);
    void ButtonEventHandler(const ButtonEvent &aButtonState);
    void LightEventHandler();
    void CurrentSensorEventHandler(const CurrentSensorEvent &aCurrentSensorState);

private:
    friend AppTask & GetAppTask(void);
    CHIP_ERROR Init();
    void DispatchEvent(const AppEvent &aEvent);
    static void LightingActionEventHandler(const AppEvent &aEvent);
    void UpdateLightingClusterState();
    static void CurrentSensorActionEventHandler(const AppEvent &aEvent);
    void UpdateElectricalMeasurementClusterState(const AppEvent &aEvent);

    static AppTask sAppTask;
};

inline AppTask & GetAppTask(void)
{
    return AppTask::sAppTask;
}