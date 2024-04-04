/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
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

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

/**** Cluster endpoint counts ****/
#define MATTER_DM_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_GROUPS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ON_OFF_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ON_OFF_SWITCH_CONFIGURATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_LEVEL_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_BINARY_INPUT_BASIC_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_DESCRIPTOR_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_BINDING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ACCESS_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ACTIONS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_BASIC_INFORMATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER_CLIENT_ENDPOINT_COUNT  \
  (1)
#define MATTER_DM_LOCALIZATION_CONFIGURATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_TIME_FORMAT_LOCALIZATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_UNIT_LOCALIZATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_POWER_SOURCE_CONFIGURATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_POWER_SOURCE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_GENERAL_COMMISSIONING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_NETWORK_COMMISSIONING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_DIAGNOSTIC_LOGS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_GENERAL_DIAGNOSTICS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_SOFTWARE_DIAGNOSTICS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_TIME_SYNCHRONIZATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_BRIDGED_DEVICE_BASIC_INFORMATION_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_SWITCH_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ADMINISTRATOR_COMMISSIONING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_OPERATIONAL_CREDENTIALS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_GROUP_KEY_MANAGEMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_FIXED_LABEL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_USER_LABEL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_BOOLEAN_STATE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ICD_MANAGEMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_TIMER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_OPERATIONAL_STATE_OVEN_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_OVEN_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_LAUNDRY_DRYER_CONTROLS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_MODE_SELECT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_LAUNDRY_WASHER_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_REFRIGERATOR_AND_TEMPERATURE_CONTROLLED_CABINET_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_LAUNDRY_WASHER_CONTROLS_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_RVC_RUN_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_RVC_CLEAN_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_TEMPERATURE_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_REFRIGERATOR_ALARM_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_DISHWASHER_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_AIR_QUALITY_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_SMOKE_CO_ALARM_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_DISHWASHER_ALARM_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_MICROWAVE_OVEN_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_MICROWAVE_OVEN_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_OPERATIONAL_STATE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_OPERATIONAL_STATE_RVC_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_SCENES_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_HEPA_FILTER_MONITORING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ACTIVATED_CARBON_FILTER_MONITORING_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_ELECTRICAL_POWER_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ELECTRICAL_ENERGY_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT  \
  (1)
#define MATTER_DM_DEVICE_ENERGY_MANAGEMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ENERGY_EVSE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_POWER_TOPOLOGY_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ENERGY_EVSE_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_DEVICE_ENERGY_MANAGEMENT_MODE_CLUSTER_CLIENT_ENDPOINT_COUNT  \
  (1)
#define MATTER_DM_DOOR_LOCK_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_WINDOW_COVERING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_BARRIER_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_PUMP_CONFIGURATION_AND_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_THERMOSTAT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_FAN_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_COLOR_CONTROL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_BALLAST_CONFIGURATION_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ILLUMINANCE_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_TEMPERATURE_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_PRESSURE_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_FLOW_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT  \
  (1)
#define MATTER_DM_OCCUPANCY_SENSING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_PM2_5_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_FORMALDEHYDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_PM1_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT  \
  (1)
#define MATTER_DM_PM10_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_TVOC_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_RADON_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT \
  (1)
#define MATTER_DM_WAKE_ON_LAN_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_CHANNEL_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_TARGET_NAVIGATOR_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_MEDIA_PLAYBACK_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_MEDIA_INPUT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_LOW_POWER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_KEYPAD_INPUT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_CONTENT_LAUNCHER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_AUDIO_OUTPUT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_APPLICATION_LAUNCHER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_APPLICATION_BASIC_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ACCOUNT_LOGIN_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_ELECTRICAL_MEASUREMENT_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_UNIT_TESTING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define MATTER_DM_SAMPLE_MEI_CLUSTER_CLIENT_ENDPOINT_COUNT (1)

/**** Cluster Plugins ****/

// Use this macro to check if the client side of the Identify cluster is
// included
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_IDENTIFY_CLIENT

// Use this macro to check if the client side of the Groups cluster is included
#define ZCL_USING_GROUPS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_GROUPS_CLIENT

// Use this macro to check if the client side of the On/Off cluster is included
#define ZCL_USING_ON_OFF_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ON_OFF_CLIENT

// Use this macro to check if the client side of the On/off Switch Configuration
// cluster is included
#define ZCL_USING_ON_OFF_SWITCH_CONFIGURATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ON_OFF_SWITCH_CONFIGURATION_CLIENT

// Use this macro to check if the client side of the Level Control cluster is
// included
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_LEVEL_CONTROL_CLIENT

// Use this macro to check if the client side of the Binary Input (Basic)
// cluster is included
#define ZCL_USING_BINARY_INPUT_BASIC_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_BINARY_INPUT_BASIC_CLIENT

// Use this macro to check if the client side of the Descriptor cluster is
// included
#define ZCL_USING_DESCRIPTOR_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_DESCRIPTOR_CLIENT

// Use this macro to check if the client side of the Binding cluster is included
#define ZCL_USING_BINDING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_BINDING_CLIENT

// Use this macro to check if the client side of the Access Control cluster is
// included
#define ZCL_USING_ACCESS_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ACCESS_CONTROL_CLIENT

// Use this macro to check if the client side of the Actions cluster is included
#define ZCL_USING_ACTIONS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ACTIONS_CLIENT

// Use this macro to check if the client side of the Basic Information cluster
// is included
#define ZCL_USING_BASIC_INFORMATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_BASIC_INFORMATION_CLIENT

// Use this macro to check if the client side of the OTA Software Update
// Provider cluster is included
#define ZCL_USING_OTA_SOFTWARE_UPDATE_PROVIDER_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OTA_SOFTWARE_UPDATE_PROVIDER_CLIENT

// Use this macro to check if the client side of the OTA Software Update
// Requestor cluster is included
#define ZCL_USING_OTA_SOFTWARE_UPDATE_REQUESTOR_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OTA_SOFTWARE_UPDATE_REQUESTOR_CLIENT

// Use this macro to check if the client side of the Localization Configuration
// cluster is included
#define ZCL_USING_LOCALIZATION_CONFIGURATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_LOCALIZATION_CONFIGURATION_CLIENT

// Use this macro to check if the client side of the Time Format Localization
// cluster is included
#define ZCL_USING_TIME_FORMAT_LOCALIZATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_TIME_FORMAT_LOCALIZATION_CLIENT

// Use this macro to check if the client side of the Unit Localization cluster
// is included
#define ZCL_USING_UNIT_LOCALIZATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_UNIT_LOCALIZATION_CLIENT

// Use this macro to check if the client side of the Power Source Configuration
// cluster is included
#define ZCL_USING_POWER_SOURCE_CONFIGURATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_POWER_SOURCE_CONFIGURATION_CLIENT

// Use this macro to check if the client side of the Power Source cluster is
// included
#define ZCL_USING_POWER_SOURCE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_POWER_SOURCE_CLIENT

// Use this macro to check if the client side of the General Commissioning
// cluster is included
#define ZCL_USING_GENERAL_COMMISSIONING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_GENERAL_COMMISSIONING_CLIENT

// Use this macro to check if the client side of the Network Commissioning
// cluster is included
#define ZCL_USING_NETWORK_COMMISSIONING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_NETWORK_COMMISSIONING_CLIENT

// Use this macro to check if the client side of the Diagnostic Logs cluster is
// included
#define ZCL_USING_DIAGNOSTIC_LOGS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_DIAGNOSTIC_LOGS_CLIENT

// Use this macro to check if the client side of the General Diagnostics cluster
// is included
#define ZCL_USING_GENERAL_DIAGNOSTICS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_GENERAL_DIAGNOSTICS_CLIENT

// Use this macro to check if the client side of the Software Diagnostics
// cluster is included
#define ZCL_USING_SOFTWARE_DIAGNOSTICS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_SOFTWARE_DIAGNOSTICS_CLIENT

// Use this macro to check if the client side of the Thread Network Diagnostics
// cluster is included
#define ZCL_USING_THREAD_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_THREAD_NETWORK_DIAGNOSTICS_CLIENT

// Use this macro to check if the client side of the WiFi Network Diagnostics
// cluster is included
#define ZCL_USING_WIFI_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_WI_FI_NETWORK_DIAGNOSTICS_CLIENT

// Use this macro to check if the client side of the Ethernet Network
// Diagnostics cluster is included
#define ZCL_USING_ETHERNET_NETWORK_DIAGNOSTICS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ETHERNET_NETWORK_DIAGNOSTICS_CLIENT

// Use this macro to check if the client side of the Time Synchronization
// cluster is included
#define ZCL_USING_TIME_SYNCHRONIZATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_TIME_SYNCHRONIZATION_CLIENT

// Use this macro to check if the client side of the Bridged Device Basic
// Information cluster is included
#define ZCL_USING_BRIDGED_DEVICE_BASIC_INFORMATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_BRIDGED_DEVICE_BASIC_INFORMATION_CLIENT

// Use this macro to check if the client side of the Switch cluster is included
#define ZCL_USING_SWITCH_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_SWITCH_CLIENT

// Use this macro to check if the client side of the Administrator Commissioning
// cluster is included
#define ZCL_USING_ADMINISTRATOR_COMMISSIONING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ADMINISTRATOR_COMMISSIONING_CLIENT

// Use this macro to check if the client side of the Operational Credentials
// cluster is included
#define ZCL_USING_OPERATIONAL_CREDENTIALS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OPERATIONAL_CREDENTIALS_CLIENT

// Use this macro to check if the client side of the Group Key Management
// cluster is included
#define ZCL_USING_GROUP_KEY_MANAGEMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_GROUP_KEY_MANAGEMENT_CLIENT

// Use this macro to check if the client side of the Fixed Label cluster is
// included
#define ZCL_USING_FIXED_LABEL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_FIXED_LABEL_CLIENT

// Use this macro to check if the client side of the User Label cluster is
// included
#define ZCL_USING_USER_LABEL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_USER_LABEL_CLIENT

// Use this macro to check if the client side of the Boolean State cluster is
// included
#define ZCL_USING_BOOLEAN_STATE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_BOOLEAN_STATE_CLIENT

// Use this macro to check if the client side of the ICD Management cluster is
// included
#define ZCL_USING_ICD_MANAGEMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ICD_MANAGEMENT_CLIENT

// Use this macro to check if the client side of the Timer cluster is included
#define ZCL_USING_TIMER_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_TIMER_CLIENT

// Use this macro to check if the client side of the Oven Cavity Operational
// State cluster is included
#define ZCL_USING_OPERATIONAL_STATE_OVEN_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OVEN_CAVITY_OPERATIONAL_STATE_CLIENT

// Use this macro to check if the client side of the Oven Mode cluster is
// included
#define ZCL_USING_OVEN_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OVEN_MODE_CLIENT

// Use this macro to check if the client side of the Laundry Dryer Controls
// cluster is included
#define ZCL_USING_LAUNDRY_DRYER_CONTROLS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_LAUNDRY_DRYER_CONTROLS_CLIENT

// Use this macro to check if the client side of the Mode Select cluster is
// included
#define ZCL_USING_MODE_SELECT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_MODE_SELECT_CLIENT

// Use this macro to check if the client side of the Laundry Washer Mode cluster
// is included
#define ZCL_USING_LAUNDRY_WASHER_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_LAUNDRY_WASHER_MODE_CLIENT

// Use this macro to check if the client side of the Refrigerator And
// Temperature Controlled Cabinet Mode cluster is included
#define ZCL_USING_REFRIGERATOR_AND_TEMPERATURE_CONTROLLED_CABINET_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_REFRIGERATOR_AND_TEMPERATURE_CONTROLLED_CABINET_MODE_CLIENT

// Use this macro to check if the client side of the Laundry Washer Controls
// cluster is included
#define ZCL_USING_LAUNDRY_WASHER_CONTROLS_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_LAUNDRY_WASHER_CONTROLS_CLIENT

// Use this macro to check if the client side of the RVC Run Mode cluster is
// included
#define ZCL_USING_RVC_RUN_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_RVC_RUN_MODE_CLIENT

// Use this macro to check if the client side of the RVC Clean Mode cluster is
// included
#define ZCL_USING_RVC_CLEAN_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_RVC_CLEAN_MODE_CLIENT

// Use this macro to check if the client side of the Temperature Control cluster
// is included
#define ZCL_USING_TEMPERATURE_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_TEMPERATURE_CONTROL_CLIENT

// Use this macro to check if the client side of the Refrigerator Alarm cluster
// is included
#define ZCL_USING_REFRIGERATOR_ALARM_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_REFRIGERATOR_ALARM_CLIENT

// Use this macro to check if the client side of the Dishwasher Mode cluster is
// included
#define ZCL_USING_DISHWASHER_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_DISHWASHER_MODE_CLIENT

// Use this macro to check if the client side of the Air Quality cluster is
// included
#define ZCL_USING_AIR_QUALITY_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_AIR_QUALITY_CLIENT

// Use this macro to check if the client side of the Smoke CO Alarm cluster is
// included
#define ZCL_USING_SMOKE_CO_ALARM_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_SMOKE_CO_ALARM_CLIENT

// Use this macro to check if the client side of the Dishwasher Alarm cluster is
// included
#define ZCL_USING_DISHWASHER_ALARM_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_DISHWASHER_ALARM_CLIENT

// Use this macro to check if the client side of the Microwave Oven Mode cluster
// is included
#define ZCL_USING_MICROWAVE_OVEN_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_MICROWAVE_OVEN_MODE_CLIENT

// Use this macro to check if the client side of the Microwave Oven Control
// cluster is included
#define ZCL_USING_MICROWAVE_OVEN_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_MICROWAVE_OVEN_CONTROL_CLIENT

// Use this macro to check if the client side of the Operational State cluster
// is included
#define ZCL_USING_OPERATIONAL_STATE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OPERATIONAL_STATE_CLIENT

// Use this macro to check if the client side of the RVC Operational State
// cluster is included
#define ZCL_USING_OPERATIONAL_STATE_RVC_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_RVC_OPERATIONAL_STATE_CLIENT

// Use this macro to check if the client side of the Scenes Management cluster
// is included
#define ZCL_USING_SCENES_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_SCENES_MANAGEMENT_CLIENT

// Use this macro to check if the client side of the HEPA Filter Monitoring
// cluster is included
#define ZCL_USING_HEPA_FILTER_MONITORING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_HEPA_FILTER_MONITORING_CLIENT

// Use this macro to check if the client side of the Activated Carbon Filter
// Monitoring cluster is included
#define ZCL_USING_ACTIVATED_CARBON_FILTER_MONITORING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ACTIVATED_CARBON_FILTER_MONITORING_CLIENT

// Use this macro to check if the client side of the Electrical Power
// Measurement cluster is included
#define ZCL_USING_ELECTRICAL_POWER_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ELECTRICAL_POWER_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Electrical Energy
// Measurement cluster is included
#define ZCL_USING_ELECTRICAL_ENERGY_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ELECTRICAL_ENERGY_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Device Energy Management
// cluster is included
#define ZCL_USING_DEVICE_ENERGY_MANAGEMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_DEVICE_ENERGY_MANAGEMENT_CLIENT

// Use this macro to check if the client side of the Energy EVSE cluster is
// included
#define ZCL_USING_ENERGY_EVSE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ENERGY_EVSE_CLIENT

// Use this macro to check if the client side of the Power Topology cluster is
// included
#define ZCL_USING_POWER_TOPOLOGY_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_POWER_TOPOLOGY_CLIENT

// Use this macro to check if the client side of the Energy EVSE Mode cluster is
// included
#define ZCL_USING_ENERGY_EVSE_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ENERGY_EVSE_MODE_CLIENT

// Use this macro to check if the client side of the Device Energy Management
// Mode cluster is included
#define ZCL_USING_DEVICE_ENERGY_MANAGEMENT_MODE_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_DEVICE_ENERGY_MANAGEMENT_MODE_CLIENT

// Use this macro to check if the client side of the Door Lock cluster is
// included
#define ZCL_USING_DOOR_LOCK_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_DOOR_LOCK_CLIENT

// Use this macro to check if the client side of the Window Covering cluster is
// included
#define ZCL_USING_WINDOW_COVERING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_WINDOW_COVERING_CLIENT

// Use this macro to check if the client side of the Barrier Control cluster is
// included
#define ZCL_USING_BARRIER_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_BARRIER_CONTROL_CLIENT

// Use this macro to check if the client side of the Pump Configuration and
// Control cluster is included
#define ZCL_USING_PUMP_CONFIGURATION_AND_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_PUMP_CONFIGURATION_AND_CONTROL_CLIENT

// Use this macro to check if the client side of the Thermostat cluster is
// included
#define ZCL_USING_THERMOSTAT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_THERMOSTAT_CLIENT

// Use this macro to check if the client side of the Fan Control cluster is
// included
#define ZCL_USING_FAN_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_FAN_CONTROL_CLIENT

// Use this macro to check if the client side of the Thermostat User Interface
// Configuration cluster is included
#define ZCL_USING_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_THERMOSTAT_USER_INTERFACE_CONFIGURATION_CLIENT

// Use this macro to check if the client side of the Color Control cluster is
// included
#define ZCL_USING_COLOR_CONTROL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_COLOR_CONTROL_CLIENT

// Use this macro to check if the client side of the Ballast Configuration
// cluster is included
#define ZCL_USING_BALLAST_CONFIGURATION_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_BALLAST_CONFIGURATION_CLIENT

// Use this macro to check if the client side of the Illuminance Measurement
// cluster is included
#define ZCL_USING_ILLUMINANCE_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ILLUMINANCE_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Temperature Measurement
// cluster is included
#define ZCL_USING_TEMPERATURE_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_TEMPERATURE_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Pressure Measurement
// cluster is included
#define ZCL_USING_PRESSURE_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_PRESSURE_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Flow Measurement cluster is
// included
#define ZCL_USING_FLOW_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_FLOW_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Relative Humidity
// Measurement cluster is included
#define ZCL_USING_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_RELATIVE_HUMIDITY_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Occupancy Sensing cluster
// is included
#define ZCL_USING_OCCUPANCY_SENSING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OCCUPANCY_SENSING_CLIENT

// Use this macro to check if the client side of the Carbon Monoxide
// Concentration Measurement cluster is included
#define ZCL_USING_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Carbon Dioxide
// Concentration Measurement cluster is included
#define ZCL_USING_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Nitrogen Dioxide
// Concentration Measurement cluster is included
#define ZCL_USING_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Ozone Concentration
// Measurement cluster is included
#define ZCL_USING_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_OZONE_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the PM2.5 Concentration
// Measurement cluster is included
#define ZCL_USING_PM2_5_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_PM2__5_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Formaldehyde Concentration
// Measurement cluster is included
#define ZCL_USING_FORMALDEHYDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_FORMALDEHYDE_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the PM1 Concentration
// Measurement cluster is included
#define ZCL_USING_PM1_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_PM1_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the PM10 Concentration
// Measurement cluster is included
#define ZCL_USING_PM10_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_PM10_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Total Volatile Organic
// Compounds Concentration Measurement cluster is included
#define ZCL_USING_TVOC_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_TOTAL_VOLATILE_ORGANIC_COMPOUNDS_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Radon Concentration
// Measurement cluster is included
#define ZCL_USING_RADON_CONCENTRATION_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_RADON_CONCENTRATION_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Wake on LAN cluster is
// included
#define ZCL_USING_WAKE_ON_LAN_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_WAKE_ON_LAN_CLIENT

// Use this macro to check if the client side of the Channel cluster is included
#define ZCL_USING_CHANNEL_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_CHANNEL_CLIENT

// Use this macro to check if the client side of the Target Navigator cluster is
// included
#define ZCL_USING_TARGET_NAVIGATOR_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_TARGET_NAVIGATOR_CLIENT

// Use this macro to check if the client side of the Media Playback cluster is
// included
#define ZCL_USING_MEDIA_PLAYBACK_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_MEDIA_PLAYBACK_CLIENT

// Use this macro to check if the client side of the Media Input cluster is
// included
#define ZCL_USING_MEDIA_INPUT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_MEDIA_INPUT_CLIENT

// Use this macro to check if the client side of the Low Power cluster is
// included
#define ZCL_USING_LOW_POWER_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_LOW_POWER_CLIENT

// Use this macro to check if the client side of the Keypad Input cluster is
// included
#define ZCL_USING_KEYPAD_INPUT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_KEYPAD_INPUT_CLIENT

// Use this macro to check if the client side of the Content Launcher cluster is
// included
#define ZCL_USING_CONTENT_LAUNCHER_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_CONTENT_LAUNCHER_CLIENT

// Use this macro to check if the client side of the Audio Output cluster is
// included
#define ZCL_USING_AUDIO_OUTPUT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_AUDIO_OUTPUT_CLIENT

// Use this macro to check if the client side of the Application Launcher
// cluster is included
#define ZCL_USING_APPLICATION_LAUNCHER_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_APPLICATION_LAUNCHER_CLIENT

// Use this macro to check if the client side of the Application Basic cluster
// is included
#define ZCL_USING_APPLICATION_BASIC_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_APPLICATION_BASIC_CLIENT

// Use this macro to check if the client side of the Account Login cluster is
// included
#define ZCL_USING_ACCOUNT_LOGIN_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ACCOUNT_LOGIN_CLIENT

// Use this macro to check if the client side of the Electrical Measurement
// cluster is included
#define ZCL_USING_ELECTRICAL_MEASUREMENT_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_ELECTRICAL_MEASUREMENT_CLIENT

// Use this macro to check if the client side of the Unit Testing cluster is
// included
#define ZCL_USING_UNIT_TESTING_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_UNIT_TESTING_CLIENT

// Use this macro to check if the client side of the Sample MEI cluster is
// included
#define ZCL_USING_SAMPLE_MEI_CLUSTER_CLIENT
#define MATTER_DM_PLUGIN_SAMPLE_MEI_CLIENT
