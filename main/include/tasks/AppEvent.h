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
#include "hal/touch_sensor_types.h"

typedef struct Buttons Buttons;
typedef struct ButtonEvent ButtonEvent;
typedef struct LightEvent LightEvent;
typedef struct CurrentSensorEvent CurrentSensorEvent;
typedef struct AppEvent AppEvent;
using EventHandler = void (*)(const AppEvent &);


struct Buttons {
    bool Button0  : 1;
    bool Button1  : 1;
    bool Button2  : 1;
    bool Button3  : 1;
    bool Button4  : 1;
    bool Button5  : 1;
    bool Button6  : 1;
    bool Button7  : 1;
    bool Button8  : 1;
    bool Button9  : 1;
    bool Button10 : 1;
    bool Button11 : 1;
    bool Button12 : 1;
    bool Button13 : 1;
    bool Button14 : 1;
    bool Button15 : 1;
};

struct ButtonEvent {
    union
    {
        Buttons ButtonState;
        uint32_t ButtonStateRaw : 16;
    };
};

struct LightEvent {
    bool LightState;
    uint8_t LightLevel;
};

struct CurrentSensorEvent {
    int16_t DcVoltage;
    int16_t DcCurrent;
    int16_t DcPower;
};

struct AppEvent {
    union
    {
        ButtonEvent mButtonEvent;
        LightEvent mLightEvent;
        CurrentSensorEvent mCurrentSensorEvent;
    };

    EventHandler mHandler;

};