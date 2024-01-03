#pragma once

#include <stdint.h>
#include "AppEvent.h"
#include "LEDWidget.h"
#include <platform/CHIPDeviceLayer.h>

// Application-defined error codes in the CHIP_ERROR space.
#define APP_ERROR_EVENT_QUEUE_FAILED CHIP_APPLICATION_ERROR(0x01)
#define APP_ERROR_CREATE_TASK_FAILED CHIP_APPLICATION_ERROR(0x02)
#define APP_ERROR_UNHANDLED_EVENT CHIP_APPLICATION_ERROR(0x03)

extern LEDWidget AppLED;

class AppTask
{

public:
    CHIP_ERROR StartAppTask();
    static void AppTaskMain(void * pvParameter);
    void PostEvent(const AppEvent * aEvent);
    static void LightingActionEventHandler(AppEvent * aEvent);
    void UpdateClusterState();

private:
    friend AppTask & GetAppTask(void);
    CHIP_ERROR Init();
    void DispatchEvent(AppEvent * event);
    

    static AppTask sAppTask;
};

inline AppTask & GetAppTask(void)
{
    return AppTask::sAppTask;
}