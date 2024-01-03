#pragma once
void MatterAccessControlPluginServerInitCallback();
void MatterAdministratorCommissioningPluginServerInitCallback();
void MatterBasicInformationPluginServerInitCallback();
void MatterDescriptorPluginServerInitCallback();
void MatterGeneralCommissioningPluginServerInitCallback();
void MatterGeneralDiagnosticsPluginServerInitCallback();
void MatterGroupKeyManagementPluginServerInitCallback();
void MatterGroupsPluginServerInitCallback();
void MatterIdentifyPluginServerInitCallback();
void MatterLevelControlPluginServerInitCallback();
void MatterLocalizationConfigurationPluginServerInitCallback();
void MatterNetworkCommissioningPluginServerInitCallback();
void MatterOnOffPluginServerInitCallback();
void MatterOperationalCredentialsPluginServerInitCallback();
void MatterScenesPluginServerInitCallback();
void MatterTimeFormatLocalizationPluginServerInitCallback();
void MatterUnitLocalizationPluginServerInitCallback();

#define MATTER_PLUGINS_INIT \
    MatterAccessControlPluginServerInitCallback(); \
    MatterAdministratorCommissioningPluginServerInitCallback(); \
    MatterBasicInformationPluginServerInitCallback(); \
    MatterDescriptorPluginServerInitCallback(); \
    MatterGeneralCommissioningPluginServerInitCallback(); \
    MatterGeneralDiagnosticsPluginServerInitCallback(); \
    MatterGroupKeyManagementPluginServerInitCallback(); \
    MatterGroupsPluginServerInitCallback(); \
    MatterIdentifyPluginServerInitCallback(); \
    MatterLevelControlPluginServerInitCallback(); \
    MatterLocalizationConfigurationPluginServerInitCallback(); \
    MatterNetworkCommissioningPluginServerInitCallback(); \
    MatterOnOffPluginServerInitCallback(); \
    MatterOperationalCredentialsPluginServerInitCallback(); \
    MatterScenesPluginServerInitCallback(); \
    MatterTimeFormatLocalizationPluginServerInitCallback(); \
    MatterUnitLocalizationPluginServerInitCallback();

