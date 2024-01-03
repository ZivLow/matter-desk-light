#pragma once

#include <stdint.h>
#include "hal/touch_sensor_types.h"
#include <array>

typedef struct Buttons Buttons;
typedef struct ButtonEvent ButtonEvent;
typedef struct LightEvent LightEvent;
typedef struct AppEvent AppEvent;
typedef void (*EventHandler)(AppEvent *);

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

    std::array<bool, TOUCH_PAD_MAX> ButtonEnabled{};
};

struct LightEvent {
    uint8_t Action;
    int32_t Actor;
};

struct AppEvent {
    union
    {
        ButtonEvent *pButtonEvent;
        LightEvent *pLightEvent;
    };

    EventHandler mHandler;

};