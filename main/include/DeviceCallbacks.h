#pragma once

#include <common/CommonDeviceCallbacks.h>

class AppDeviceCallbacks : public CommonDeviceCallbacks
{
public:
    virtual void PostAttributeChangeCallback(chip::EndpointId endpointId, chip::ClusterId clusterId, chip::AttributeId attributeId,
                                             uint8_t type, uint16_t size, uint8_t * value);

private:
    void OnOnOffPostAttributeChangeCallback(chip::EndpointId endpointId, chip::AttributeId attributeId, uint8_t * value);
    void OnLevelControlAttributeChangeCallback(chip::EndpointId endpointId, chip::AttributeId attributeId, uint8_t * value);
};