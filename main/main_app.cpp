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

#include "DeviceCallbacks.h"
#include "AppTask.h"
#include "ButtonTask.h"
#include "CurrentSensorTask.h"
#include <common/CHIPDeviceManager.h>
#include <common/Esp32AppServer.h>
#include <platform/ESP32/ESP32Utils.h>
#include <common/Esp32ThreadInit.h>
#include <app/server/OnboardingCodesUtil.h>
#include <credentials/DeviceAttestationCredsProvider.h>
#include <credentials/examples/DeviceAttestationCredsExample.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "nvs_flash.h"

#if CONFIG_ENABLE_ESP32_FACTORY_DATA_PROVIDER
#include <platform/ESP32/ESP32FactoryDataProvider.h>
#endif // CONFIG_ENABLE_ESP32_FACTORY_DATA_PROVIDER

#if CONFIG_ENABLE_ESP32_DEVICE_INFO_PROVIDER
#include <platform/ESP32/ESP32DeviceInfoProvider.h>
#else
#include <DeviceInfoProviderImpl.h>
#endif // CONFIG_ENABLE_ESP32_DEVICE_INFO_PROVIDER

namespace {
#if CONFIG_ENABLE_ESP32_FACTORY_DATA_PROVIDER
chip::DeviceLayer::ESP32FactoryDataProvider sFactoryDataProvider;
#endif // CONFIG_ENABLE_ESP32_FACTORY_DATA_PROVIDER

#if CONFIG_ENABLE_ESP32_DEVICE_INFO_PROVIDER
chip::DeviceLayer::ESP32DeviceInfoProvider gExampleDeviceInfoProvider;
#else
chip::DeviceLayer::DeviceInfoProviderImpl gExampleDeviceInfoProvider;
#endif // CONFIG_ENABLE_ESP32_DEVICE_INFO_PROVIDER
} // namespace

chip::Credentials::DeviceAttestationCredentialsProvider * get_dac_provider(void)
{
#if CONFIG_SEC_CERT_DAC_PROVIDER
    return &gSecureCertDACProvider;
#elif CONFIG_ENABLE_ESP32_FACTORY_DATA_PROVIDER
    return &sFactoryDataProvider;
#else // EXAMPLE_DAC_PROVIDER
    return chip::Credentials::Examples::GetExampleDACProvider();
#endif
}

#define LEDC_TIMER              LEDC_TIMER_0
#define LEDC_MODE               LEDC_LOW_SPEED_MODE
#define LEDC_OUTPUT_IO          (23) // Define the output GPIO
#define LEDC_CHANNEL            LEDC_CHANNEL_0
#define LEDC_DUTY_RES           LEDC_TIMER_13_BIT // Set duty resolution to 13 bits
#define LEDC_DUTY               (4095) // Set duty to 50%. ((2 ** 13) - 1) * 50% = 4095
#define LEDC_FREQUENCY          (5000) // Frequency in Hertz. Set frequency at 5 kHz

static const char *const TAG = "Desk-Light";
static AppDeviceCallbacks EchoCallbacks;

static void InitServer(intptr_t context)
{
    // Print QR Code URL
    PrintOnboardingCodes(chip::RendezvousInformationFlags(CONFIG_RENDEZVOUS_MODE));

    Esp32AppServer::Init(); // Init ZCL Data Model and CHIP App Server AND Initialize device attestation config
}

extern "C" void app_main(void)
{   
    // Initialize the ESP NVS layer.
    esp_err_t err = nvs_flash_init();
    if (err != ESP_OK)
    {
        ESP_LOGE(TAG, "nvs_flash_init() failed: %s", esp_err_to_name(err));
        return;
    }
    err = esp_event_loop_create_default();
    if (err != ESP_OK)
    {
        ESP_LOGE(TAG, "esp_event_loop_create_default() failed: %s", esp_err_to_name(err));
        return;
    }

    ESP_LOGI(TAG, "==================================================");
    ESP_LOGI(TAG, "%s starting", TAG);
    ESP_LOGI(TAG, "==================================================");

#if CHIP_DEVICE_CONFIG_ENABLE_WIFI
    if (chip::DeviceLayer::Internal::ESP32Utils::InitWiFiStack() != CHIP_NO_ERROR)
    {
        ESP_LOGE(TAG, "Failed to initialize WiFi stack");
        return;
    }
#endif // CHIP_DEVICE_CONFIG_ENABLE_WIFI

    chip::DeviceLayer::SetDeviceInfoProvider(&gExampleDeviceInfoProvider);

    auto& deviceMgr = chip::DeviceManager::CHIPDeviceManager::GetInstance();
    CHIP_ERROR error              = deviceMgr.Init(&EchoCallbacks);
    if (error != CHIP_NO_ERROR)
    {
        ESP_LOGE(TAG, "device.Init() failed: %s", chip::ErrorStr(error));
        return;
    }

#if CONFIG_ENABLE_ESP32_FACTORY_DATA_PROVIDER
    chip::DeviceLayer::SetCommissionableDataProvider(&sFactoryDataProvider);
#if CONFIG_ENABLE_ESP32_DEVICE_INSTANCE_INFO_PROVIDER
    chip::DeviceLayer::SetDeviceInstanceInfoProvider(&sFactoryDataProvider);
#endif
#endif

    chip::Credentials::SetDeviceAttestationCredentialsProvider(get_dac_provider());
    ESPOpenThreadInit();

    chip::DeviceLayer::PlatformMgr().ScheduleWork(InitServer, reinterpret_cast<intptr_t>(nullptr));

    error = GetAppTask().StartAppTask();
    if (error != CHIP_NO_ERROR)
    {
        ESP_LOGE(TAG, "GetAppTask().StartAppTask() failed : %s", ErrorStr(error));
    }

    error = GetButtonTask().StartButtonTask();
    if (error != CHIP_NO_ERROR)
    {
        ESP_LOGE(TAG, "GetButtonTask().StartButtonTask() failed : %s", ErrorStr(error));
    }

    error = GetCurrentSensorTask().StartCurrentSensorTask();
    if (error != CHIP_NO_ERROR)
    {
        ESP_LOGE(TAG, "GetCurrentSensorTask().StartCurrentSensorTask() failed : %s", ErrorStr(error));
    }

    // while (true){
    //     vTaskDelay(1000 / portTICK_PERIOD_MS);
    // }

}