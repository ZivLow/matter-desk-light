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

#include "ina226_interface.h"
#include <platform/CHIPDeviceLayer.h>
#include "AppEvent.h"
#include "driver/i2c_master.h"

// Application-defined error codes in the CHIP_ERROR space.
#define APP_ERROR_EVENT_QUEUE_FAILED CHIP_APPLICATION_ERROR(0x01)
#define APP_ERROR_CREATE_TASK_FAILED CHIP_APPLICATION_ERROR(0x02)
#define APP_ERROR_UNHANDLED_EVENT CHIP_APPLICATION_ERROR(0x03)
#define INA226_ERROR_INIT_FAILED CHIP_APPLICATION_ERROR(0x04)

// extern std::unique_ptr<INA226> CurrentSensor;

class CurrentSensorTask
{
public:
    CHIP_ERROR StartCurrentSensorTask();

private:
    friend CurrentSensorTask & GetCurrentSensorTask(void);
    
    // CHIP_ERROR Init();
    void CurrentSensorTaskMain(void * pvParameter);

private:
    CurrentSensorEvent currentSensorEvent;
};

inline CurrentSensorTask & GetCurrentSensorTask(void)
{
    static CurrentSensorTask sCurrentSensorTask;
    return sCurrentSensorTask;
}