#pragma once

#include "driver/ledc.h"

class LEDWidget
{
public:
    void Init(void);

    // On Off methods
    void Set(bool state);
    void Toggle(void);

    // Change brightness level methods
    void SetBrightness(const uint8_t brightness);
    uint8_t IncreaseBrightness(const uint8_t &change);
    uint8_t DecreaseBrightness(const uint8_t &change);

    // Getter methods
    const uint8_t &GetLevel(void) const;
    const bool &IsTurnedOn(void) const;

private:
    bool mState;
    uint8_t mBrightness;
    gpio_num_t mGPIONum;

    void DoSet(void);
};