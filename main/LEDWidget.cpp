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

#include "LEDWidget.h"
#include "esp_log.h"

static const char *const TAG = "LEDWidget";

void LEDWidget::Init(void)
{
    esp_log_level_set(TAG, ESP_LOG_DEBUG);

    mState      = false;
    mBrightness = UINT8_MAX/2;
    mGPIONum    = (gpio_num_t) CONFIG_LED_GPIO;

    ledc_timer_config_t ledc_timer = {
        .speed_mode      = LEDC_LOW_SPEED_MODE, // timer mode
        .duty_resolution = LEDC_TIMER_8_BIT,    // resolution of PWM duty
        .timer_num       = LEDC_TIMER_1,        // timer index
        .freq_hz         = 25000,                // frequency of PWM signal
        .clk_cfg         = LEDC_AUTO_CLK,       // Auto select the source clock
    };
    ledc_timer_config(&ledc_timer);
    ledc_channel_config_t ledc_channel = {
        .gpio_num   = mGPIONum,
        .speed_mode = LEDC_LOW_SPEED_MODE,
        .channel    = LEDC_CHANNEL_0,
        .intr_type  = LEDC_INTR_DISABLE,
        .timer_sel  = LEDC_TIMER_1,
        .duty       = 0,
        .hpoint     = 0,
    };
    ledc_channel_config(&ledc_channel);
}

void LEDWidget::Set(bool state)
{
    ESP_LOGI(TAG, "Setting state to %d", state ? 1 : 0);
    if (state == mState)
        return;

    mState = state;

    DoSet();
}

void LEDWidget::Toggle()
{
    ESP_LOGI(TAG, "Toggling state to %d", !mState);
    mState = !mState;

    DoSet();
}

void LEDWidget::SetBrightness(const uint8_t brightness)
{
    ESP_LOGI(TAG, "Setting brightness to %d", brightness);
    if (brightness == mBrightness)
        return;

    mBrightness = brightness;

    DoSet();
}

const uint8_t &LEDWidget::GetLevel() const
{
    return this->mBrightness;
}

const bool &LEDWidget::IsTurnedOn() const
{
    return this->mState;
}

void LEDWidget::DoSet(void)
{
    uint8_t brightness = mState ? mBrightness : 0;

    if (mGPIONum < GPIO_NUM_MAX)
    {
        ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, brightness);
        ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
        //ledc_set_duty_and_update(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, brightness, 0);
    }
}

uint8_t LEDWidget::IncreaseBrightness(const uint8_t &change)
{
    if (mBrightness == UINT8_MAX)
    {
        ESP_LOGW(TAG, "Already at max brightness! brightness=%d", mBrightness);
        // Do not call SetBrightness
        return mBrightness;
    }

    uint8_t newBrightness = mBrightness + change;
    bool newBrightnessOverflow = newBrightness < mBrightness;

    if (newBrightnessOverflow)
    {
        ESP_LOGD(TAG, "Brightness overflow! mBrightness=%d, change=%d, newBrightness=%d", mBrightness, change, newBrightness);
        newBrightness = UINT8_MAX;
    }

    SetBrightness(newBrightness);
    
    return newBrightness;
}

uint8_t LEDWidget::DecreaseBrightness(const uint8_t &change)
{
    if (mBrightness == 0)
    {
        ESP_LOGW(TAG, "Already at min brightness! brightness=%d", mBrightness);
        // Do not call SetBrightness
        return mBrightness;
    }

    uint8_t newBrightness = mBrightness - change;
    bool newBrightnessUnderflow = newBrightness > mBrightness;

    if (newBrightnessUnderflow)
    {
        ESP_LOGD(TAG, "Brightness underflow! mBrightness=%d, change=%d, newBrightness=%d", mBrightness, change, newBrightness);
        newBrightness = 0;
    }

    SetBrightness(newBrightness);
    
    return newBrightness;
}