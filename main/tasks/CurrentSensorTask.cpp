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

#include "CurrentSensorTask.h"
#include "AppTask.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include <inttypes.h>
#include <memory>
#include <utility>
#include <bitset>
#include "driver/touch_pad.h"
#include "soc/sens_periph.h"

static const char *const TAG = "current-sensor-task";
static TaskHandle_t sCurrentSensorTaskHandle;

CHIP_ERROR CurrentSensorTask::StartCurrentSensorTask()
{
    esp_log_level_set(TAG, ESP_LOG_DEBUG);

    // Start Button task.
    BaseType_t xReturned;
    xReturned = xTaskCreate([](void* arg) { static_cast<CurrentSensorTask*>(arg)->CurrentSensorTaskMain(arg); }, "Current Sensor Task Main", 4096, this, 1, &sCurrentSensorTaskHandle);
    return (xReturned == pdPASS) ? CHIP_NO_ERROR : APP_ERROR_CREATE_TASK_FAILED;
}

void CurrentSensorTask::CurrentSensorTaskMain(void * pvParameter)
{
    ESP_LOGI(TAG, "Starting Current Sensor Task Main");

    // Initialize current sensor
    auto CurrentSensor = std::make_unique<INA226>();

    // Configure current sensor
    CurrentSensor->SetOperatingMode(INA226::OperatingMode::SHUNT_AND_BUS_CONTINUOUS);
    CurrentSensor->SetAveragingMode(INA226::AveragingMode::SAMPLE_256);
    CurrentSensor->SetBusVoltageConversionTime(INA226::ConversionTime::TIME_332_uS);
    CurrentSensor->SetShuntVoltageConversionTime(INA226::ConversionTime::TIME_2116_uS);

    // Read from current sensor
    ESP_LOGD(TAG, "\n");
    ESP_LOGD(TAG, "Config: %" PRIx16, CurrentSensor->GetConfig());
    ESP_LOGD(TAG, "Manufacturer ID: %" PRIx16, CurrentSensor->GetManufacturerID());
    ESP_LOGD(TAG, "Die ID: %" PRIx16, CurrentSensor->GetDieID());
    ESP_LOGD(TAG, "Operating mode: %" PRIu8, std::to_underlying(CurrentSensor->GetOperatingMode()));
    ESP_LOGD(TAG, "Averaging mode: %" PRIu8, std::to_underlying(CurrentSensor->GetAveragingMode()));
    ESP_LOGD(TAG, "Bus voltage conversion time: %" PRIu8, std::to_underlying(CurrentSensor->GetBusVoltageConversionTime()));
    ESP_LOGD(TAG, "Shunt voltage conversion time: %" PRIu8, std::to_underlying(CurrentSensor->GetShuntVoltageConversionTime()));
    ESP_LOGD(TAG, "Alert trigger mask: 0b%s" , std::bitset<16>(CurrentSensor->GetAlertTriggerMask()).to_string().c_str());
    ESP_LOGD(TAG, "Alert limit value: %" PRIu16, CurrentSensor->GetAlertLimitValue());

    while (true) {
        currentSensorEvent.DcVoltage = CurrentSensor->GetBusVoltage_mV();
        currentSensorEvent.DcCurrent = CurrentSensor->GetCurrent_uA() / 1000;
        currentSensorEvent.DcPower = CurrentSensor->GetPower_uW() / 1000;

        GetAppTask().CurrentSensorEventHandler(currentSensorEvent);

        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
