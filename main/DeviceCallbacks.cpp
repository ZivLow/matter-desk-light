#include "AppTask.h"
#include "DeviceCallbacks.h"
#include "LEDWidget.h"
#include "esp_log.h"

#include <app-common/zap-generated/attributes/Accessors.h>
#include <app-common/zap-generated/ids/Attributes.h>
#include <app-common/zap-generated/ids/Clusters.h>

static const char * TAG = "echo-devicecallbacks";

extern LEDWidget AppLED;

using namespace chip;
using namespace chip::app::Clusters;

void AppDeviceCallbacks::PostAttributeChangeCallback(EndpointId endpointId, ClusterId clusterId, AttributeId attributeId,
                                                     uint8_t type, uint16_t size, uint8_t * value)
{
    ESP_LOGI(TAG, "PostAttributeChangeCallback - Cluster ID: '0x%" PRIx32 "', EndPoint ID: '0x%x', Attribute ID: '0x%" PRIx32 "'",
             clusterId, endpointId, attributeId);

    switch (clusterId)
    {
    case OnOff::Id:
        OnOnOffPostAttributeChangeCallback(endpointId, attributeId, value);
        break;

    case LevelControl::Id:
        OnLevelControlAttributeChangeCallback(endpointId, attributeId, value);
        break;

    default:
        ESP_LOGE(TAG, "Unhandled cluster ID: %" PRIu32, clusterId);
        break;
    }

    ESP_LOGI(TAG, "Current free heap: %u\n", static_cast<unsigned int>(heap_caps_get_free_size(MALLOC_CAP_8BIT)));
}

void AppDeviceCallbacks::OnOnOffPostAttributeChangeCallback(EndpointId endpointId, AttributeId attributeId, uint8_t * value)
{
    VerifyOrExit(attributeId == OnOff::Attributes::OnOff::Id,
                 ESP_LOGI(TAG, "Unhandled Attribute ID: '0x%" PRIx32 "'", attributeId));
    VerifyOrExit(endpointId == 1, ESP_LOGE(TAG, "Unexpected EndPoint ID: `0x%02x'", endpointId));

    AppLED.Set(*value);

exit:
    return;
}

void AppDeviceCallbacks::OnLevelControlAttributeChangeCallback(EndpointId endpointId, AttributeId attributeId, uint8_t * value)
{
    VerifyOrExit(attributeId == LevelControl::Attributes::CurrentLevel::Id,
                 ESP_LOGI(TAG, "Unhandled Attribute ID: '0x%" PRIx32 "'", attributeId));
    VerifyOrExit(endpointId == 1, ESP_LOGE(TAG, "Unexpected EndPoint ID: `0x%02x'", endpointId));

    AppLED.SetBrightness(*value);

exit:
    return;
}

void emberAfOnOffClusterInitCallback(EndpointId endpoint)
{
    ESP_LOGI(TAG, "emberAfOnOffClusterInitCallback");
    GetAppTask().UpdateClusterState();
}