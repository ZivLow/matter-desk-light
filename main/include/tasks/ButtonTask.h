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

#include "AppEvent.h"
#include "LEDWidget.h"
#include <platform/CHIPDeviceLayer.h>
#include "driver/touch_pad.h"
#include "soc/sens_periph.h"
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include <vector>
#include <bitset>
#include <memory>

// Application-defined error codes in the CHIP_ERROR space.
#define APP_ERROR_EVENT_QUEUE_FAILED CHIP_APPLICATION_ERROR(0x01)
#define APP_ERROR_CREATE_TASK_FAILED CHIP_APPLICATION_ERROR(0x02)
#define APP_ERROR_UNHANDLED_EVENT CHIP_APPLICATION_ERROR(0x03)

#define TOUCHPAD_FILTER_TOUCH_PERIOD 20     // Period in ms

extern LEDWidget AppLED;

class ButtonTask
{
public:
    struct Buttons {
        std::bitset<16> ButtonState;
        std::vector<touch_pad_t> EnabledButtons;

        explicit Buttons(const std::vector<touch_pad_t> &buttons) :
            EnabledButtons(buttons)
            {}
    };

    

public:
    CHIP_ERROR StartButtonTask();
    CHIP_ERROR Init(const std::unique_ptr<Buttons> &pButtons);
    static void ButtonTaskMain(void * pvParameter);
    static void ButtonTaskReadRaw(void * pvParameter);
    static void button_rtc_intr(void *arg);

private:
    friend ButtonTask & GetButtonTask(void);
    static void button_set_thresholds(const std::unique_ptr<Buttons> &pButtons);
    static void ButtonBothPressedAction(LEDWidget *led);
    static void ButtonBrightnessIncreaseAction(LEDWidget *led, const uint8_t &change);
    static void ButtonBrightnessDecreaseAction(LEDWidget *led, const uint8_t &change);
};

inline ButtonTask & GetButtonTask(void)
{
    static ButtonTask sButtonTask;
    return sButtonTask;
}