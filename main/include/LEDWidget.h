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