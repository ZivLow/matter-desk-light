/*
 *
 *    Copyright (c) 2023 Project CHIP Authors
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
package chip.devicecontroller;

import javax.annotation.Nullable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Optional;

public class ChipStructs {
public static class ScenesClusterAttributeValuePair {
  public Long attributeID;
  public Long attributeValue;
  public ScenesClusterAttributeValuePair(
    Long attributeID,
    Long attributeValue
  ) {
    this.attributeID = attributeID;
    this.attributeValue = attributeValue;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ScenesClusterAttributeValuePair {\n");
    output.append("\tattributeID: ");
    output.append(attributeID);
    output.append("\n");
    output.append("\tattributeValue: ");
    output.append(attributeValue);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ScenesClusterExtensionFieldSet {
  public Long clusterID;
  public ArrayList<ChipStructs.ScenesClusterAttributeValuePair> attributeValueList;
  public ScenesClusterExtensionFieldSet(
    Long clusterID,
    ArrayList<ChipStructs.ScenesClusterAttributeValuePair> attributeValueList
  ) {
    this.clusterID = clusterID;
    this.attributeValueList = attributeValueList;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ScenesClusterExtensionFieldSet {\n");
    output.append("\tclusterID: ");
    output.append(clusterID);
    output.append("\n");
    output.append("\tattributeValueList: ");
    output.append(attributeValueList);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class DescriptorClusterDeviceTypeStruct {
  public Long deviceType;
  public Integer revision;
  public DescriptorClusterDeviceTypeStruct(
    Long deviceType,
    Integer revision
  ) {
    this.deviceType = deviceType;
    this.revision = revision;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("DescriptorClusterDeviceTypeStruct {\n");
    output.append("\tdeviceType: ");
    output.append(deviceType);
    output.append("\n");
    output.append("\trevision: ");
    output.append(revision);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class DescriptorClusterSemanticTagStruct {
  public @Nullable Integer mfgCode;
  public Integer namespaceID;
  public Integer tag;
  public @Nullable Optional<String> label;
  public DescriptorClusterSemanticTagStruct(
    @Nullable Integer mfgCode,
    Integer namespaceID,
    Integer tag,
    @Nullable Optional<String> label
  ) {
    this.mfgCode = mfgCode;
    this.namespaceID = namespaceID;
    this.tag = tag;
    this.label = label;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("DescriptorClusterSemanticTagStruct {\n");
    output.append("\tmfgCode: ");
    output.append(mfgCode);
    output.append("\n");
    output.append("\tnamespaceID: ");
    output.append(namespaceID);
    output.append("\n");
    output.append("\ttag: ");
    output.append(tag);
    output.append("\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class BindingClusterTargetStruct {
  public Optional<Long> node;
  public Optional<Integer> group;
  public Optional<Integer> endpoint;
  public Optional<Long> cluster;
  public Integer fabricIndex;
  public BindingClusterTargetStruct(
    Optional<Long> node,
    Optional<Integer> group,
    Optional<Integer> endpoint,
    Optional<Long> cluster,
    Integer fabricIndex
  ) {
    this.node = node;
    this.group = group;
    this.endpoint = endpoint;
    this.cluster = cluster;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("BindingClusterTargetStruct {\n");
    output.append("\tnode: ");
    output.append(node);
    output.append("\n");
    output.append("\tgroup: ");
    output.append(group);
    output.append("\n");
    output.append("\tendpoint: ");
    output.append(endpoint);
    output.append("\n");
    output.append("\tcluster: ");
    output.append(cluster);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class AccessControlClusterAccessControlTargetStruct {
  public @Nullable Long cluster;
  public @Nullable Integer endpoint;
  public @Nullable Long deviceType;
  public AccessControlClusterAccessControlTargetStruct(
    @Nullable Long cluster,
    @Nullable Integer endpoint,
    @Nullable Long deviceType
  ) {
    this.cluster = cluster;
    this.endpoint = endpoint;
    this.deviceType = deviceType;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("AccessControlClusterAccessControlTargetStruct {\n");
    output.append("\tcluster: ");
    output.append(cluster);
    output.append("\n");
    output.append("\tendpoint: ");
    output.append(endpoint);
    output.append("\n");
    output.append("\tdeviceType: ");
    output.append(deviceType);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class AccessControlClusterAccessControlEntryStruct {
  public Integer privilege;
  public Integer authMode;
  public @Nullable ArrayList<Long> subjects;
  public @Nullable ArrayList<ChipStructs.AccessControlClusterAccessControlTargetStruct> targets;
  public Integer fabricIndex;
  public AccessControlClusterAccessControlEntryStruct(
    Integer privilege,
    Integer authMode,
    @Nullable ArrayList<Long> subjects,
    @Nullable ArrayList<ChipStructs.AccessControlClusterAccessControlTargetStruct> targets,
    Integer fabricIndex
  ) {
    this.privilege = privilege;
    this.authMode = authMode;
    this.subjects = subjects;
    this.targets = targets;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("AccessControlClusterAccessControlEntryStruct {\n");
    output.append("\tprivilege: ");
    output.append(privilege);
    output.append("\n");
    output.append("\tauthMode: ");
    output.append(authMode);
    output.append("\n");
    output.append("\tsubjects: ");
    output.append(subjects);
    output.append("\n");
    output.append("\ttargets: ");
    output.append(targets);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class AccessControlClusterAccessControlExtensionStruct {
  public byte[] data;
  public Integer fabricIndex;
  public AccessControlClusterAccessControlExtensionStruct(
    byte[] data,
    Integer fabricIndex
  ) {
    this.data = data;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("AccessControlClusterAccessControlExtensionStruct {\n");
    output.append("\tdata: ");
    output.append(Arrays.toString(data));
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ActionsClusterActionStruct {
  public Integer actionID;
  public String name;
  public Integer type;
  public Integer endpointListID;
  public Integer supportedCommands;
  public Integer state;
  public ActionsClusterActionStruct(
    Integer actionID,
    String name,
    Integer type,
    Integer endpointListID,
    Integer supportedCommands,
    Integer state
  ) {
    this.actionID = actionID;
    this.name = name;
    this.type = type;
    this.endpointListID = endpointListID;
    this.supportedCommands = supportedCommands;
    this.state = state;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ActionsClusterActionStruct {\n");
    output.append("\tactionID: ");
    output.append(actionID);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("\ttype: ");
    output.append(type);
    output.append("\n");
    output.append("\tendpointListID: ");
    output.append(endpointListID);
    output.append("\n");
    output.append("\tsupportedCommands: ");
    output.append(supportedCommands);
    output.append("\n");
    output.append("\tstate: ");
    output.append(state);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ActionsClusterEndpointListStruct {
  public Integer endpointListID;
  public String name;
  public Integer type;
  public ArrayList<Integer> endpoints;
  public ActionsClusterEndpointListStruct(
    Integer endpointListID,
    String name,
    Integer type,
    ArrayList<Integer> endpoints
  ) {
    this.endpointListID = endpointListID;
    this.name = name;
    this.type = type;
    this.endpoints = endpoints;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ActionsClusterEndpointListStruct {\n");
    output.append("\tendpointListID: ");
    output.append(endpointListID);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("\ttype: ");
    output.append(type);
    output.append("\n");
    output.append("\tendpoints: ");
    output.append(endpoints);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class BasicInformationClusterCapabilityMinimaStruct {
  public Integer caseSessionsPerFabric;
  public Integer subscriptionsPerFabric;
  public BasicInformationClusterCapabilityMinimaStruct(
    Integer caseSessionsPerFabric,
    Integer subscriptionsPerFabric
  ) {
    this.caseSessionsPerFabric = caseSessionsPerFabric;
    this.subscriptionsPerFabric = subscriptionsPerFabric;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("BasicInformationClusterCapabilityMinimaStruct {\n");
    output.append("\tcaseSessionsPerFabric: ");
    output.append(caseSessionsPerFabric);
    output.append("\n");
    output.append("\tsubscriptionsPerFabric: ");
    output.append(subscriptionsPerFabric);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class BasicInformationClusterProductAppearanceStruct {
  public Integer finish;
  public @Nullable Integer primaryColor;
  public BasicInformationClusterProductAppearanceStruct(
    Integer finish,
    @Nullable Integer primaryColor
  ) {
    this.finish = finish;
    this.primaryColor = primaryColor;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("BasicInformationClusterProductAppearanceStruct {\n");
    output.append("\tfinish: ");
    output.append(finish);
    output.append("\n");
    output.append("\tprimaryColor: ");
    output.append(primaryColor);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class OtaSoftwareUpdateRequestorClusterProviderLocation {
  public Long providerNodeID;
  public Integer endpoint;
  public Integer fabricIndex;
  public OtaSoftwareUpdateRequestorClusterProviderLocation(
    Long providerNodeID,
    Integer endpoint,
    Integer fabricIndex
  ) {
    this.providerNodeID = providerNodeID;
    this.endpoint = endpoint;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("OtaSoftwareUpdateRequestorClusterProviderLocation {\n");
    output.append("\tproviderNodeID: ");
    output.append(providerNodeID);
    output.append("\n");
    output.append("\tendpoint: ");
    output.append(endpoint);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class PowerSourceClusterBatChargeFaultChangeType {
  public ArrayList<Integer> current;
  public ArrayList<Integer> previous;
  public PowerSourceClusterBatChargeFaultChangeType(
    ArrayList<Integer> current,
    ArrayList<Integer> previous
  ) {
    this.current = current;
    this.previous = previous;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("PowerSourceClusterBatChargeFaultChangeType {\n");
    output.append("\tcurrent: ");
    output.append(current);
    output.append("\n");
    output.append("\tprevious: ");
    output.append(previous);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class PowerSourceClusterBatFaultChangeType {
  public ArrayList<Integer> current;
  public ArrayList<Integer> previous;
  public PowerSourceClusterBatFaultChangeType(
    ArrayList<Integer> current,
    ArrayList<Integer> previous
  ) {
    this.current = current;
    this.previous = previous;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("PowerSourceClusterBatFaultChangeType {\n");
    output.append("\tcurrent: ");
    output.append(current);
    output.append("\n");
    output.append("\tprevious: ");
    output.append(previous);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class PowerSourceClusterWiredFaultChangeType {
  public ArrayList<Integer> current;
  public ArrayList<Integer> previous;
  public PowerSourceClusterWiredFaultChangeType(
    ArrayList<Integer> current,
    ArrayList<Integer> previous
  ) {
    this.current = current;
    this.previous = previous;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("PowerSourceClusterWiredFaultChangeType {\n");
    output.append("\tcurrent: ");
    output.append(current);
    output.append("\n");
    output.append("\tprevious: ");
    output.append(previous);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class GeneralCommissioningClusterBasicCommissioningInfo {
  public Integer failSafeExpiryLengthSeconds;
  public Integer maxCumulativeFailsafeSeconds;
  public GeneralCommissioningClusterBasicCommissioningInfo(
    Integer failSafeExpiryLengthSeconds,
    Integer maxCumulativeFailsafeSeconds
  ) {
    this.failSafeExpiryLengthSeconds = failSafeExpiryLengthSeconds;
    this.maxCumulativeFailsafeSeconds = maxCumulativeFailsafeSeconds;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("GeneralCommissioningClusterBasicCommissioningInfo {\n");
    output.append("\tfailSafeExpiryLengthSeconds: ");
    output.append(failSafeExpiryLengthSeconds);
    output.append("\n");
    output.append("\tmaxCumulativeFailsafeSeconds: ");
    output.append(maxCumulativeFailsafeSeconds);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class NetworkCommissioningClusterNetworkInfoStruct {
  public byte[] networkID;
  public Boolean connected;
  public NetworkCommissioningClusterNetworkInfoStruct(
    byte[] networkID,
    Boolean connected
  ) {
    this.networkID = networkID;
    this.connected = connected;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("NetworkCommissioningClusterNetworkInfoStruct {\n");
    output.append("\tnetworkID: ");
    output.append(Arrays.toString(networkID));
    output.append("\n");
    output.append("\tconnected: ");
    output.append(connected);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class NetworkCommissioningClusterThreadInterfaceScanResultStruct {
  public Integer panId;
  public Long extendedPanId;
  public String networkName;
  public Integer channel;
  public Integer version;
  public byte[] extendedAddress;
  public Integer rssi;
  public Integer lqi;
  public NetworkCommissioningClusterThreadInterfaceScanResultStruct(
    Integer panId,
    Long extendedPanId,
    String networkName,
    Integer channel,
    Integer version,
    byte[] extendedAddress,
    Integer rssi,
    Integer lqi
  ) {
    this.panId = panId;
    this.extendedPanId = extendedPanId;
    this.networkName = networkName;
    this.channel = channel;
    this.version = version;
    this.extendedAddress = extendedAddress;
    this.rssi = rssi;
    this.lqi = lqi;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("NetworkCommissioningClusterThreadInterfaceScanResultStruct {\n");
    output.append("\tpanId: ");
    output.append(panId);
    output.append("\n");
    output.append("\textendedPanId: ");
    output.append(extendedPanId);
    output.append("\n");
    output.append("\tnetworkName: ");
    output.append(networkName);
    output.append("\n");
    output.append("\tchannel: ");
    output.append(channel);
    output.append("\n");
    output.append("\tversion: ");
    output.append(version);
    output.append("\n");
    output.append("\textendedAddress: ");
    output.append(Arrays.toString(extendedAddress));
    output.append("\n");
    output.append("\trssi: ");
    output.append(rssi);
    output.append("\n");
    output.append("\tlqi: ");
    output.append(lqi);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class NetworkCommissioningClusterWiFiInterfaceScanResultStruct {
  public Integer security;
  public byte[] ssid;
  public byte[] bssid;
  public Integer channel;
  public Integer wiFiBand;
  public Integer rssi;
  public NetworkCommissioningClusterWiFiInterfaceScanResultStruct(
    Integer security,
    byte[] ssid,
    byte[] bssid,
    Integer channel,
    Integer wiFiBand,
    Integer rssi
  ) {
    this.security = security;
    this.ssid = ssid;
    this.bssid = bssid;
    this.channel = channel;
    this.wiFiBand = wiFiBand;
    this.rssi = rssi;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("NetworkCommissioningClusterWiFiInterfaceScanResultStruct {\n");
    output.append("\tsecurity: ");
    output.append(security);
    output.append("\n");
    output.append("\tssid: ");
    output.append(Arrays.toString(ssid));
    output.append("\n");
    output.append("\tbssid: ");
    output.append(Arrays.toString(bssid));
    output.append("\n");
    output.append("\tchannel: ");
    output.append(channel);
    output.append("\n");
    output.append("\twiFiBand: ");
    output.append(wiFiBand);
    output.append("\n");
    output.append("\trssi: ");
    output.append(rssi);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class GeneralDiagnosticsClusterNetworkInterface {
  public String name;
  public Boolean isOperational;
  public @Nullable Boolean offPremiseServicesReachableIPv4;
  public @Nullable Boolean offPremiseServicesReachableIPv6;
  public byte[] hardwareAddress;
  public ArrayList<byte[]> IPv4Addresses;
  public ArrayList<byte[]> IPv6Addresses;
  public Integer type;
  public GeneralDiagnosticsClusterNetworkInterface(
    String name,
    Boolean isOperational,
    @Nullable Boolean offPremiseServicesReachableIPv4,
    @Nullable Boolean offPremiseServicesReachableIPv6,
    byte[] hardwareAddress,
    ArrayList<byte[]> IPv4Addresses,
    ArrayList<byte[]> IPv6Addresses,
    Integer type
  ) {
    this.name = name;
    this.isOperational = isOperational;
    this.offPremiseServicesReachableIPv4 = offPremiseServicesReachableIPv4;
    this.offPremiseServicesReachableIPv6 = offPremiseServicesReachableIPv6;
    this.hardwareAddress = hardwareAddress;
    this.IPv4Addresses = IPv4Addresses;
    this.IPv6Addresses = IPv6Addresses;
    this.type = type;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("GeneralDiagnosticsClusterNetworkInterface {\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("\tisOperational: ");
    output.append(isOperational);
    output.append("\n");
    output.append("\toffPremiseServicesReachableIPv4: ");
    output.append(offPremiseServicesReachableIPv4);
    output.append("\n");
    output.append("\toffPremiseServicesReachableIPv6: ");
    output.append(offPremiseServicesReachableIPv6);
    output.append("\n");
    output.append("\thardwareAddress: ");
    output.append(Arrays.toString(hardwareAddress));
    output.append("\n");
    output.append("\tIPv4Addresses: ");
    output.append(IPv4Addresses);
    output.append("\n");
    output.append("\tIPv6Addresses: ");
    output.append(IPv6Addresses);
    output.append("\n");
    output.append("\ttype: ");
    output.append(type);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class SoftwareDiagnosticsClusterThreadMetricsStruct {
  public Long id;
  public Optional<String> name;
  public Optional<Long> stackFreeCurrent;
  public Optional<Long> stackFreeMinimum;
  public Optional<Long> stackSize;
  public SoftwareDiagnosticsClusterThreadMetricsStruct(
    Long id,
    Optional<String> name,
    Optional<Long> stackFreeCurrent,
    Optional<Long> stackFreeMinimum,
    Optional<Long> stackSize
  ) {
    this.id = id;
    this.name = name;
    this.stackFreeCurrent = stackFreeCurrent;
    this.stackFreeMinimum = stackFreeMinimum;
    this.stackSize = stackSize;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("SoftwareDiagnosticsClusterThreadMetricsStruct {\n");
    output.append("\tid: ");
    output.append(id);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("\tstackFreeCurrent: ");
    output.append(stackFreeCurrent);
    output.append("\n");
    output.append("\tstackFreeMinimum: ");
    output.append(stackFreeMinimum);
    output.append("\n");
    output.append("\tstackSize: ");
    output.append(stackSize);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ThreadNetworkDiagnosticsClusterNeighborTableStruct {
  public Long extAddress;
  public Long age;
  public Integer rloc16;
  public Long linkFrameCounter;
  public Long mleFrameCounter;
  public Integer lqi;
  public @Nullable Integer averageRssi;
  public @Nullable Integer lastRssi;
  public Integer frameErrorRate;
  public Integer messageErrorRate;
  public Boolean rxOnWhenIdle;
  public Boolean fullThreadDevice;
  public Boolean fullNetworkData;
  public Boolean isChild;
  public ThreadNetworkDiagnosticsClusterNeighborTableStruct(
    Long extAddress,
    Long age,
    Integer rloc16,
    Long linkFrameCounter,
    Long mleFrameCounter,
    Integer lqi,
    @Nullable Integer averageRssi,
    @Nullable Integer lastRssi,
    Integer frameErrorRate,
    Integer messageErrorRate,
    Boolean rxOnWhenIdle,
    Boolean fullThreadDevice,
    Boolean fullNetworkData,
    Boolean isChild
  ) {
    this.extAddress = extAddress;
    this.age = age;
    this.rloc16 = rloc16;
    this.linkFrameCounter = linkFrameCounter;
    this.mleFrameCounter = mleFrameCounter;
    this.lqi = lqi;
    this.averageRssi = averageRssi;
    this.lastRssi = lastRssi;
    this.frameErrorRate = frameErrorRate;
    this.messageErrorRate = messageErrorRate;
    this.rxOnWhenIdle = rxOnWhenIdle;
    this.fullThreadDevice = fullThreadDevice;
    this.fullNetworkData = fullNetworkData;
    this.isChild = isChild;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ThreadNetworkDiagnosticsClusterNeighborTableStruct {\n");
    output.append("\textAddress: ");
    output.append(extAddress);
    output.append("\n");
    output.append("\tage: ");
    output.append(age);
    output.append("\n");
    output.append("\trloc16: ");
    output.append(rloc16);
    output.append("\n");
    output.append("\tlinkFrameCounter: ");
    output.append(linkFrameCounter);
    output.append("\n");
    output.append("\tmleFrameCounter: ");
    output.append(mleFrameCounter);
    output.append("\n");
    output.append("\tlqi: ");
    output.append(lqi);
    output.append("\n");
    output.append("\taverageRssi: ");
    output.append(averageRssi);
    output.append("\n");
    output.append("\tlastRssi: ");
    output.append(lastRssi);
    output.append("\n");
    output.append("\tframeErrorRate: ");
    output.append(frameErrorRate);
    output.append("\n");
    output.append("\tmessageErrorRate: ");
    output.append(messageErrorRate);
    output.append("\n");
    output.append("\trxOnWhenIdle: ");
    output.append(rxOnWhenIdle);
    output.append("\n");
    output.append("\tfullThreadDevice: ");
    output.append(fullThreadDevice);
    output.append("\n");
    output.append("\tfullNetworkData: ");
    output.append(fullNetworkData);
    output.append("\n");
    output.append("\tisChild: ");
    output.append(isChild);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ThreadNetworkDiagnosticsClusterOperationalDatasetComponents {
  public Boolean activeTimestampPresent;
  public Boolean pendingTimestampPresent;
  public Boolean masterKeyPresent;
  public Boolean networkNamePresent;
  public Boolean extendedPanIdPresent;
  public Boolean meshLocalPrefixPresent;
  public Boolean delayPresent;
  public Boolean panIdPresent;
  public Boolean channelPresent;
  public Boolean pskcPresent;
  public Boolean securityPolicyPresent;
  public Boolean channelMaskPresent;
  public ThreadNetworkDiagnosticsClusterOperationalDatasetComponents(
    Boolean activeTimestampPresent,
    Boolean pendingTimestampPresent,
    Boolean masterKeyPresent,
    Boolean networkNamePresent,
    Boolean extendedPanIdPresent,
    Boolean meshLocalPrefixPresent,
    Boolean delayPresent,
    Boolean panIdPresent,
    Boolean channelPresent,
    Boolean pskcPresent,
    Boolean securityPolicyPresent,
    Boolean channelMaskPresent
  ) {
    this.activeTimestampPresent = activeTimestampPresent;
    this.pendingTimestampPresent = pendingTimestampPresent;
    this.masterKeyPresent = masterKeyPresent;
    this.networkNamePresent = networkNamePresent;
    this.extendedPanIdPresent = extendedPanIdPresent;
    this.meshLocalPrefixPresent = meshLocalPrefixPresent;
    this.delayPresent = delayPresent;
    this.panIdPresent = panIdPresent;
    this.channelPresent = channelPresent;
    this.pskcPresent = pskcPresent;
    this.securityPolicyPresent = securityPolicyPresent;
    this.channelMaskPresent = channelMaskPresent;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ThreadNetworkDiagnosticsClusterOperationalDatasetComponents {\n");
    output.append("\tactiveTimestampPresent: ");
    output.append(activeTimestampPresent);
    output.append("\n");
    output.append("\tpendingTimestampPresent: ");
    output.append(pendingTimestampPresent);
    output.append("\n");
    output.append("\tmasterKeyPresent: ");
    output.append(masterKeyPresent);
    output.append("\n");
    output.append("\tnetworkNamePresent: ");
    output.append(networkNamePresent);
    output.append("\n");
    output.append("\textendedPanIdPresent: ");
    output.append(extendedPanIdPresent);
    output.append("\n");
    output.append("\tmeshLocalPrefixPresent: ");
    output.append(meshLocalPrefixPresent);
    output.append("\n");
    output.append("\tdelayPresent: ");
    output.append(delayPresent);
    output.append("\n");
    output.append("\tpanIdPresent: ");
    output.append(panIdPresent);
    output.append("\n");
    output.append("\tchannelPresent: ");
    output.append(channelPresent);
    output.append("\n");
    output.append("\tpskcPresent: ");
    output.append(pskcPresent);
    output.append("\n");
    output.append("\tsecurityPolicyPresent: ");
    output.append(securityPolicyPresent);
    output.append("\n");
    output.append("\tchannelMaskPresent: ");
    output.append(channelMaskPresent);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ThreadNetworkDiagnosticsClusterRouteTableStruct {
  public Long extAddress;
  public Integer rloc16;
  public Integer routerId;
  public Integer nextHop;
  public Integer pathCost;
  public Integer LQIIn;
  public Integer LQIOut;
  public Integer age;
  public Boolean allocated;
  public Boolean linkEstablished;
  public ThreadNetworkDiagnosticsClusterRouteTableStruct(
    Long extAddress,
    Integer rloc16,
    Integer routerId,
    Integer nextHop,
    Integer pathCost,
    Integer LQIIn,
    Integer LQIOut,
    Integer age,
    Boolean allocated,
    Boolean linkEstablished
  ) {
    this.extAddress = extAddress;
    this.rloc16 = rloc16;
    this.routerId = routerId;
    this.nextHop = nextHop;
    this.pathCost = pathCost;
    this.LQIIn = LQIIn;
    this.LQIOut = LQIOut;
    this.age = age;
    this.allocated = allocated;
    this.linkEstablished = linkEstablished;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ThreadNetworkDiagnosticsClusterRouteTableStruct {\n");
    output.append("\textAddress: ");
    output.append(extAddress);
    output.append("\n");
    output.append("\trloc16: ");
    output.append(rloc16);
    output.append("\n");
    output.append("\trouterId: ");
    output.append(routerId);
    output.append("\n");
    output.append("\tnextHop: ");
    output.append(nextHop);
    output.append("\n");
    output.append("\tpathCost: ");
    output.append(pathCost);
    output.append("\n");
    output.append("\tLQIIn: ");
    output.append(LQIIn);
    output.append("\n");
    output.append("\tLQIOut: ");
    output.append(LQIOut);
    output.append("\n");
    output.append("\tage: ");
    output.append(age);
    output.append("\n");
    output.append("\tallocated: ");
    output.append(allocated);
    output.append("\n");
    output.append("\tlinkEstablished: ");
    output.append(linkEstablished);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ThreadNetworkDiagnosticsClusterSecurityPolicy {
  public Integer rotationTime;
  public Integer flags;
  public ThreadNetworkDiagnosticsClusterSecurityPolicy(
    Integer rotationTime,
    Integer flags
  ) {
    this.rotationTime = rotationTime;
    this.flags = flags;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ThreadNetworkDiagnosticsClusterSecurityPolicy {\n");
    output.append("\trotationTime: ");
    output.append(rotationTime);
    output.append("\n");
    output.append("\tflags: ");
    output.append(flags);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class TimeSynchronizationClusterDSTOffsetStruct {
  public Long offset;
  public Long validStarting;
  public @Nullable Long validUntil;
  public TimeSynchronizationClusterDSTOffsetStruct(
    Long offset,
    Long validStarting,
    @Nullable Long validUntil
  ) {
    this.offset = offset;
    this.validStarting = validStarting;
    this.validUntil = validUntil;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("TimeSynchronizationClusterDSTOffsetStruct {\n");
    output.append("\toffset: ");
    output.append(offset);
    output.append("\n");
    output.append("\tvalidStarting: ");
    output.append(validStarting);
    output.append("\n");
    output.append("\tvalidUntil: ");
    output.append(validUntil);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class TimeSynchronizationClusterFabricScopedTrustedTimeSourceStruct {
  public Long nodeID;
  public Integer endpoint;
  public TimeSynchronizationClusterFabricScopedTrustedTimeSourceStruct(
    Long nodeID,
    Integer endpoint
  ) {
    this.nodeID = nodeID;
    this.endpoint = endpoint;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("TimeSynchronizationClusterFabricScopedTrustedTimeSourceStruct {\n");
    output.append("\tnodeID: ");
    output.append(nodeID);
    output.append("\n");
    output.append("\tendpoint: ");
    output.append(endpoint);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class TimeSynchronizationClusterTimeZoneStruct {
  public Long offset;
  public Long validAt;
  public Optional<String> name;
  public TimeSynchronizationClusterTimeZoneStruct(
    Long offset,
    Long validAt,
    Optional<String> name
  ) {
    this.offset = offset;
    this.validAt = validAt;
    this.name = name;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("TimeSynchronizationClusterTimeZoneStruct {\n");
    output.append("\toffset: ");
    output.append(offset);
    output.append("\n");
    output.append("\tvalidAt: ");
    output.append(validAt);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class TimeSynchronizationClusterTrustedTimeSourceStruct {
  public Integer fabricIndex;
  public Long nodeID;
  public Integer endpoint;
  public TimeSynchronizationClusterTrustedTimeSourceStruct(
    Integer fabricIndex,
    Long nodeID,
    Integer endpoint
  ) {
    this.fabricIndex = fabricIndex;
    this.nodeID = nodeID;
    this.endpoint = endpoint;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("TimeSynchronizationClusterTrustedTimeSourceStruct {\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("\tnodeID: ");
    output.append(nodeID);
    output.append("\n");
    output.append("\tendpoint: ");
    output.append(endpoint);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class BridgedDeviceBasicInformationClusterProductAppearanceStruct {
  public Integer finish;
  public @Nullable Integer primaryColor;
  public BridgedDeviceBasicInformationClusterProductAppearanceStruct(
    Integer finish,
    @Nullable Integer primaryColor
  ) {
    this.finish = finish;
    this.primaryColor = primaryColor;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("BridgedDeviceBasicInformationClusterProductAppearanceStruct {\n");
    output.append("\tfinish: ");
    output.append(finish);
    output.append("\n");
    output.append("\tprimaryColor: ");
    output.append(primaryColor);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class OperationalCredentialsClusterFabricDescriptorStruct {
  public byte[] rootPublicKey;
  public Integer vendorID;
  public Long fabricID;
  public Long nodeID;
  public String label;
  public Integer fabricIndex;
  public OperationalCredentialsClusterFabricDescriptorStruct(
    byte[] rootPublicKey,
    Integer vendorID,
    Long fabricID,
    Long nodeID,
    String label,
    Integer fabricIndex
  ) {
    this.rootPublicKey = rootPublicKey;
    this.vendorID = vendorID;
    this.fabricID = fabricID;
    this.nodeID = nodeID;
    this.label = label;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("OperationalCredentialsClusterFabricDescriptorStruct {\n");
    output.append("\trootPublicKey: ");
    output.append(Arrays.toString(rootPublicKey));
    output.append("\n");
    output.append("\tvendorID: ");
    output.append(vendorID);
    output.append("\n");
    output.append("\tfabricID: ");
    output.append(fabricID);
    output.append("\n");
    output.append("\tnodeID: ");
    output.append(nodeID);
    output.append("\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class OperationalCredentialsClusterNOCStruct {
  public byte[] noc;
  public @Nullable byte[] icac;
  public Integer fabricIndex;
  public OperationalCredentialsClusterNOCStruct(
    byte[] noc,
    @Nullable byte[] icac,
    Integer fabricIndex
  ) {
    this.noc = noc;
    this.icac = icac;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("OperationalCredentialsClusterNOCStruct {\n");
    output.append("\tnoc: ");
    output.append(Arrays.toString(noc));
    output.append("\n");
    output.append("\ticac: ");
    output.append(Arrays.toString(icac));
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class GroupKeyManagementClusterGroupInfoMapStruct {
  public Integer groupId;
  public ArrayList<Integer> endpoints;
  public Optional<String> groupName;
  public Integer fabricIndex;
  public GroupKeyManagementClusterGroupInfoMapStruct(
    Integer groupId,
    ArrayList<Integer> endpoints,
    Optional<String> groupName,
    Integer fabricIndex
  ) {
    this.groupId = groupId;
    this.endpoints = endpoints;
    this.groupName = groupName;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("GroupKeyManagementClusterGroupInfoMapStruct {\n");
    output.append("\tgroupId: ");
    output.append(groupId);
    output.append("\n");
    output.append("\tendpoints: ");
    output.append(endpoints);
    output.append("\n");
    output.append("\tgroupName: ");
    output.append(groupName);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class GroupKeyManagementClusterGroupKeyMapStruct {
  public Integer groupId;
  public Integer groupKeySetID;
  public Integer fabricIndex;
  public GroupKeyManagementClusterGroupKeyMapStruct(
    Integer groupId,
    Integer groupKeySetID,
    Integer fabricIndex
  ) {
    this.groupId = groupId;
    this.groupKeySetID = groupKeySetID;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("GroupKeyManagementClusterGroupKeyMapStruct {\n");
    output.append("\tgroupId: ");
    output.append(groupId);
    output.append("\n");
    output.append("\tgroupKeySetID: ");
    output.append(groupKeySetID);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class GroupKeyManagementClusterGroupKeySetStruct {
  public Integer groupKeySetID;
  public Integer groupKeySecurityPolicy;
  public @Nullable byte[] epochKey0;
  public @Nullable Long epochStartTime0;
  public @Nullable byte[] epochKey1;
  public @Nullable Long epochStartTime1;
  public @Nullable byte[] epochKey2;
  public @Nullable Long epochStartTime2;
  public GroupKeyManagementClusterGroupKeySetStruct(
    Integer groupKeySetID,
    Integer groupKeySecurityPolicy,
    @Nullable byte[] epochKey0,
    @Nullable Long epochStartTime0,
    @Nullable byte[] epochKey1,
    @Nullable Long epochStartTime1,
    @Nullable byte[] epochKey2,
    @Nullable Long epochStartTime2
  ) {
    this.groupKeySetID = groupKeySetID;
    this.groupKeySecurityPolicy = groupKeySecurityPolicy;
    this.epochKey0 = epochKey0;
    this.epochStartTime0 = epochStartTime0;
    this.epochKey1 = epochKey1;
    this.epochStartTime1 = epochStartTime1;
    this.epochKey2 = epochKey2;
    this.epochStartTime2 = epochStartTime2;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("GroupKeyManagementClusterGroupKeySetStruct {\n");
    output.append("\tgroupKeySetID: ");
    output.append(groupKeySetID);
    output.append("\n");
    output.append("\tgroupKeySecurityPolicy: ");
    output.append(groupKeySecurityPolicy);
    output.append("\n");
    output.append("\tepochKey0: ");
    output.append(Arrays.toString(epochKey0));
    output.append("\n");
    output.append("\tepochStartTime0: ");
    output.append(epochStartTime0);
    output.append("\n");
    output.append("\tepochKey1: ");
    output.append(Arrays.toString(epochKey1));
    output.append("\n");
    output.append("\tepochStartTime1: ");
    output.append(epochStartTime1);
    output.append("\n");
    output.append("\tepochKey2: ");
    output.append(Arrays.toString(epochKey2));
    output.append("\n");
    output.append("\tepochStartTime2: ");
    output.append(epochStartTime2);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class FixedLabelClusterLabelStruct {
  public String label;
  public String value;
  public FixedLabelClusterLabelStruct(
    String label,
    String value
  ) {
    this.label = label;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("FixedLabelClusterLabelStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UserLabelClusterLabelStruct {
  public String label;
  public String value;
  public UserLabelClusterLabelStruct(
    String label,
    String value
  ) {
    this.label = label;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UserLabelClusterLabelStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class IcdManagementClusterMonitoringRegistrationStruct {
  public Long checkInNodeID;
  public Long monitoredSubject;
  public Integer fabricIndex;
  public IcdManagementClusterMonitoringRegistrationStruct(
    Long checkInNodeID,
    Long monitoredSubject,
    Integer fabricIndex
  ) {
    this.checkInNodeID = checkInNodeID;
    this.monitoredSubject = monitoredSubject;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("IcdManagementClusterMonitoringRegistrationStruct {\n");
    output.append("\tcheckInNodeID: ");
    output.append(checkInNodeID);
    output.append("\n");
    output.append("\tmonitoredSubject: ");
    output.append(monitoredSubject);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ModeSelectClusterSemanticTagStruct {
  public Integer mfgCode;
  public Integer value;
  public ModeSelectClusterSemanticTagStruct(
    Integer mfgCode,
    Integer value
  ) {
    this.mfgCode = mfgCode;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ModeSelectClusterSemanticTagStruct {\n");
    output.append("\tmfgCode: ");
    output.append(mfgCode);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ModeSelectClusterModeOptionStruct {
  public String label;
  public Integer mode;
  public ArrayList<ChipStructs.ModeSelectClusterSemanticTagStruct> semanticTags;
  public ModeSelectClusterModeOptionStruct(
    String label,
    Integer mode,
    ArrayList<ChipStructs.ModeSelectClusterSemanticTagStruct> semanticTags
  ) {
    this.label = label;
    this.mode = mode;
    this.semanticTags = semanticTags;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ModeSelectClusterModeOptionStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tmode: ");
    output.append(mode);
    output.append("\n");
    output.append("\tsemanticTags: ");
    output.append(semanticTags);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class LaundryWasherModeClusterModeTagStruct {
  public Optional<Integer> mfgCode;
  public Integer value;
  public LaundryWasherModeClusterModeTagStruct(
    Optional<Integer> mfgCode,
    Integer value
  ) {
    this.mfgCode = mfgCode;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("LaundryWasherModeClusterModeTagStruct {\n");
    output.append("\tmfgCode: ");
    output.append(mfgCode);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class LaundryWasherModeClusterModeOptionStruct {
  public String label;
  public Integer mode;
  public ArrayList<ChipStructs.LaundryWasherModeClusterModeTagStruct> modeTags;
  public LaundryWasherModeClusterModeOptionStruct(
    String label,
    Integer mode,
    ArrayList<ChipStructs.LaundryWasherModeClusterModeTagStruct> modeTags
  ) {
    this.label = label;
    this.mode = mode;
    this.modeTags = modeTags;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("LaundryWasherModeClusterModeOptionStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tmode: ");
    output.append(mode);
    output.append("\n");
    output.append("\tmodeTags: ");
    output.append(modeTags);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RefrigeratorAndTemperatureControlledCabinetModeClusterModeTagStruct {
  public Optional<Integer> mfgCode;
  public Integer value;
  public RefrigeratorAndTemperatureControlledCabinetModeClusterModeTagStruct(
    Optional<Integer> mfgCode,
    Integer value
  ) {
    this.mfgCode = mfgCode;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RefrigeratorAndTemperatureControlledCabinetModeClusterModeTagStruct {\n");
    output.append("\tmfgCode: ");
    output.append(mfgCode);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RefrigeratorAndTemperatureControlledCabinetModeClusterModeOptionStruct {
  public String label;
  public Integer mode;
  public ArrayList<ChipStructs.RefrigeratorAndTemperatureControlledCabinetModeClusterModeTagStruct> modeTags;
  public RefrigeratorAndTemperatureControlledCabinetModeClusterModeOptionStruct(
    String label,
    Integer mode,
    ArrayList<ChipStructs.RefrigeratorAndTemperatureControlledCabinetModeClusterModeTagStruct> modeTags
  ) {
    this.label = label;
    this.mode = mode;
    this.modeTags = modeTags;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RefrigeratorAndTemperatureControlledCabinetModeClusterModeOptionStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tmode: ");
    output.append(mode);
    output.append("\n");
    output.append("\tmodeTags: ");
    output.append(modeTags);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RvcRunModeClusterModeTagStruct {
  public Optional<Integer> mfgCode;
  public Integer value;
  public RvcRunModeClusterModeTagStruct(
    Optional<Integer> mfgCode,
    Integer value
  ) {
    this.mfgCode = mfgCode;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RvcRunModeClusterModeTagStruct {\n");
    output.append("\tmfgCode: ");
    output.append(mfgCode);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RvcRunModeClusterModeOptionStruct {
  public String label;
  public Integer mode;
  public ArrayList<ChipStructs.RvcRunModeClusterModeTagStruct> modeTags;
  public RvcRunModeClusterModeOptionStruct(
    String label,
    Integer mode,
    ArrayList<ChipStructs.RvcRunModeClusterModeTagStruct> modeTags
  ) {
    this.label = label;
    this.mode = mode;
    this.modeTags = modeTags;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RvcRunModeClusterModeOptionStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tmode: ");
    output.append(mode);
    output.append("\n");
    output.append("\tmodeTags: ");
    output.append(modeTags);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RvcCleanModeClusterModeTagStruct {
  public Optional<Integer> mfgCode;
  public Integer value;
  public RvcCleanModeClusterModeTagStruct(
    Optional<Integer> mfgCode,
    Integer value
  ) {
    this.mfgCode = mfgCode;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RvcCleanModeClusterModeTagStruct {\n");
    output.append("\tmfgCode: ");
    output.append(mfgCode);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RvcCleanModeClusterModeOptionStruct {
  public String label;
  public Integer mode;
  public ArrayList<ChipStructs.RvcCleanModeClusterModeTagStruct> modeTags;
  public RvcCleanModeClusterModeOptionStruct(
    String label,
    Integer mode,
    ArrayList<ChipStructs.RvcCleanModeClusterModeTagStruct> modeTags
  ) {
    this.label = label;
    this.mode = mode;
    this.modeTags = modeTags;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RvcCleanModeClusterModeOptionStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tmode: ");
    output.append(mode);
    output.append("\n");
    output.append("\tmodeTags: ");
    output.append(modeTags);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class DishwasherModeClusterModeTagStruct {
  public Optional<Integer> mfgCode;
  public Integer value;
  public DishwasherModeClusterModeTagStruct(
    Optional<Integer> mfgCode,
    Integer value
  ) {
    this.mfgCode = mfgCode;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("DishwasherModeClusterModeTagStruct {\n");
    output.append("\tmfgCode: ");
    output.append(mfgCode);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class DishwasherModeClusterModeOptionStruct {
  public String label;
  public Integer mode;
  public ArrayList<ChipStructs.DishwasherModeClusterModeTagStruct> modeTags;
  public DishwasherModeClusterModeOptionStruct(
    String label,
    Integer mode,
    ArrayList<ChipStructs.DishwasherModeClusterModeTagStruct> modeTags
  ) {
    this.label = label;
    this.mode = mode;
    this.modeTags = modeTags;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("DishwasherModeClusterModeOptionStruct {\n");
    output.append("\tlabel: ");
    output.append(label);
    output.append("\n");
    output.append("\tmode: ");
    output.append(mode);
    output.append("\n");
    output.append("\tmodeTags: ");
    output.append(modeTags);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class OperationalStateClusterErrorStateStruct {
  public Integer errorStateID;
  public Optional<String> errorStateLabel;
  public Optional<String> errorStateDetails;
  public OperationalStateClusterErrorStateStruct(
    Integer errorStateID,
    Optional<String> errorStateLabel,
    Optional<String> errorStateDetails
  ) {
    this.errorStateID = errorStateID;
    this.errorStateLabel = errorStateLabel;
    this.errorStateDetails = errorStateDetails;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("OperationalStateClusterErrorStateStruct {\n");
    output.append("\terrorStateID: ");
    output.append(errorStateID);
    output.append("\n");
    output.append("\terrorStateLabel: ");
    output.append(errorStateLabel);
    output.append("\n");
    output.append("\terrorStateDetails: ");
    output.append(errorStateDetails);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class OperationalStateClusterOperationalStateStruct {
  public Integer operationalStateID;
  public Optional<String> operationalStateLabel;
  public OperationalStateClusterOperationalStateStruct(
    Integer operationalStateID,
    Optional<String> operationalStateLabel
  ) {
    this.operationalStateID = operationalStateID;
    this.operationalStateLabel = operationalStateLabel;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("OperationalStateClusterOperationalStateStruct {\n");
    output.append("\toperationalStateID: ");
    output.append(operationalStateID);
    output.append("\n");
    output.append("\toperationalStateLabel: ");
    output.append(operationalStateLabel);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RvcOperationalStateClusterErrorStateStruct {
  public Integer errorStateID;
  public Optional<String> errorStateLabel;
  public Optional<String> errorStateDetails;
  public RvcOperationalStateClusterErrorStateStruct(
    Integer errorStateID,
    Optional<String> errorStateLabel,
    Optional<String> errorStateDetails
  ) {
    this.errorStateID = errorStateID;
    this.errorStateLabel = errorStateLabel;
    this.errorStateDetails = errorStateDetails;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RvcOperationalStateClusterErrorStateStruct {\n");
    output.append("\terrorStateID: ");
    output.append(errorStateID);
    output.append("\n");
    output.append("\terrorStateLabel: ");
    output.append(errorStateLabel);
    output.append("\n");
    output.append("\terrorStateDetails: ");
    output.append(errorStateDetails);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class RvcOperationalStateClusterOperationalStateStruct {
  public Integer operationalStateID;
  public Optional<String> operationalStateLabel;
  public RvcOperationalStateClusterOperationalStateStruct(
    Integer operationalStateID,
    Optional<String> operationalStateLabel
  ) {
    this.operationalStateID = operationalStateID;
    this.operationalStateLabel = operationalStateLabel;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("RvcOperationalStateClusterOperationalStateStruct {\n");
    output.append("\toperationalStateID: ");
    output.append(operationalStateID);
    output.append("\n");
    output.append("\toperationalStateLabel: ");
    output.append(operationalStateLabel);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class HepaFilterMonitoringClusterReplacementProductStruct {
  public Integer productIdentifierType;
  public String productIdentifierValue;
  public HepaFilterMonitoringClusterReplacementProductStruct(
    Integer productIdentifierType,
    String productIdentifierValue
  ) {
    this.productIdentifierType = productIdentifierType;
    this.productIdentifierValue = productIdentifierValue;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("HepaFilterMonitoringClusterReplacementProductStruct {\n");
    output.append("\tproductIdentifierType: ");
    output.append(productIdentifierType);
    output.append("\n");
    output.append("\tproductIdentifierValue: ");
    output.append(productIdentifierValue);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ActivatedCarbonFilterMonitoringClusterReplacementProductStruct {
  public Integer productIdentifierType;
  public String productIdentifierValue;
  public ActivatedCarbonFilterMonitoringClusterReplacementProductStruct(
    Integer productIdentifierType,
    String productIdentifierValue
  ) {
    this.productIdentifierType = productIdentifierType;
    this.productIdentifierValue = productIdentifierValue;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ActivatedCarbonFilterMonitoringClusterReplacementProductStruct {\n");
    output.append("\tproductIdentifierType: ");
    output.append(productIdentifierType);
    output.append("\n");
    output.append("\tproductIdentifierValue: ");
    output.append(productIdentifierValue);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class DoorLockClusterCredentialStruct {
  public Integer credentialType;
  public Integer credentialIndex;
  public DoorLockClusterCredentialStruct(
    Integer credentialType,
    Integer credentialIndex
  ) {
    this.credentialType = credentialType;
    this.credentialIndex = credentialIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("DoorLockClusterCredentialStruct {\n");
    output.append("\tcredentialType: ");
    output.append(credentialType);
    output.append("\n");
    output.append("\tcredentialIndex: ");
    output.append(credentialIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ThermostatClusterThermostatScheduleTransition {
  public Integer transitionTime;
  public @Nullable Integer heatSetpoint;
  public @Nullable Integer coolSetpoint;
  public ThermostatClusterThermostatScheduleTransition(
    Integer transitionTime,
    @Nullable Integer heatSetpoint,
    @Nullable Integer coolSetpoint
  ) {
    this.transitionTime = transitionTime;
    this.heatSetpoint = heatSetpoint;
    this.coolSetpoint = coolSetpoint;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ThermostatClusterThermostatScheduleTransition {\n");
    output.append("\ttransitionTime: ");
    output.append(transitionTime);
    output.append("\n");
    output.append("\theatSetpoint: ");
    output.append(heatSetpoint);
    output.append("\n");
    output.append("\tcoolSetpoint: ");
    output.append(coolSetpoint);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ChannelClusterChannelInfoStruct {
  public Integer majorNumber;
  public Integer minorNumber;
  public Optional<String> name;
  public Optional<String> callSign;
  public Optional<String> affiliateCallSign;
  public ChannelClusterChannelInfoStruct(
    Integer majorNumber,
    Integer minorNumber,
    Optional<String> name,
    Optional<String> callSign,
    Optional<String> affiliateCallSign
  ) {
    this.majorNumber = majorNumber;
    this.minorNumber = minorNumber;
    this.name = name;
    this.callSign = callSign;
    this.affiliateCallSign = affiliateCallSign;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ChannelClusterChannelInfoStruct {\n");
    output.append("\tmajorNumber: ");
    output.append(majorNumber);
    output.append("\n");
    output.append("\tminorNumber: ");
    output.append(minorNumber);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("\tcallSign: ");
    output.append(callSign);
    output.append("\n");
    output.append("\taffiliateCallSign: ");
    output.append(affiliateCallSign);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ChannelClusterLineupInfoStruct {
  public String operatorName;
  public Optional<String> lineupName;
  public Optional<String> postalCode;
  public Integer lineupInfoType;
  public ChannelClusterLineupInfoStruct(
    String operatorName,
    Optional<String> lineupName,
    Optional<String> postalCode,
    Integer lineupInfoType
  ) {
    this.operatorName = operatorName;
    this.lineupName = lineupName;
    this.postalCode = postalCode;
    this.lineupInfoType = lineupInfoType;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ChannelClusterLineupInfoStruct {\n");
    output.append("\toperatorName: ");
    output.append(operatorName);
    output.append("\n");
    output.append("\tlineupName: ");
    output.append(lineupName);
    output.append("\n");
    output.append("\tpostalCode: ");
    output.append(postalCode);
    output.append("\n");
    output.append("\tlineupInfoType: ");
    output.append(lineupInfoType);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class TargetNavigatorClusterTargetInfoStruct {
  public Integer identifier;
  public String name;
  public TargetNavigatorClusterTargetInfoStruct(
    Integer identifier,
    String name
  ) {
    this.identifier = identifier;
    this.name = name;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("TargetNavigatorClusterTargetInfoStruct {\n");
    output.append("\tidentifier: ");
    output.append(identifier);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class MediaPlaybackClusterPlaybackPositionStruct {
  public Long updatedAt;
  public @Nullable Long position;
  public MediaPlaybackClusterPlaybackPositionStruct(
    Long updatedAt,
    @Nullable Long position
  ) {
    this.updatedAt = updatedAt;
    this.position = position;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("MediaPlaybackClusterPlaybackPositionStruct {\n");
    output.append("\tupdatedAt: ");
    output.append(updatedAt);
    output.append("\n");
    output.append("\tposition: ");
    output.append(position);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class MediaInputClusterInputInfoStruct {
  public Integer index;
  public Integer inputType;
  public String name;
  public String description;
  public MediaInputClusterInputInfoStruct(
    Integer index,
    Integer inputType,
    String name,
    String description
  ) {
    this.index = index;
    this.inputType = inputType;
    this.name = name;
    this.description = description;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("MediaInputClusterInputInfoStruct {\n");
    output.append("\tindex: ");
    output.append(index);
    output.append("\n");
    output.append("\tinputType: ");
    output.append(inputType);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("\tdescription: ");
    output.append(description);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ContentLauncherClusterDimensionStruct {
  public Double width;
  public Double height;
  public Integer metric;
  public ContentLauncherClusterDimensionStruct(
    Double width,
    Double height,
    Integer metric
  ) {
    this.width = width;
    this.height = height;
    this.metric = metric;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ContentLauncherClusterDimensionStruct {\n");
    output.append("\twidth: ");
    output.append(width);
    output.append("\n");
    output.append("\theight: ");
    output.append(height);
    output.append("\n");
    output.append("\tmetric: ");
    output.append(metric);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ContentLauncherClusterAdditionalInfoStruct {
  public String name;
  public String value;
  public ContentLauncherClusterAdditionalInfoStruct(
    String name,
    String value
  ) {
    this.name = name;
    this.value = value;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ContentLauncherClusterAdditionalInfoStruct {\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ContentLauncherClusterParameterStruct {
  public Integer type;
  public String value;
  public Optional<ArrayList<ChipStructs.ContentLauncherClusterAdditionalInfoStruct>> externalIDList;
  public ContentLauncherClusterParameterStruct(
    Integer type,
    String value,
    Optional<ArrayList<ChipStructs.ContentLauncherClusterAdditionalInfoStruct>> externalIDList
  ) {
    this.type = type;
    this.value = value;
    this.externalIDList = externalIDList;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ContentLauncherClusterParameterStruct {\n");
    output.append("\ttype: ");
    output.append(type);
    output.append("\n");
    output.append("\tvalue: ");
    output.append(value);
    output.append("\n");
    output.append("\texternalIDList: ");
    output.append(externalIDList);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ContentLauncherClusterContentSearchStruct {
  public ArrayList<ChipStructs.ContentLauncherClusterParameterStruct> parameterList;
  public ContentLauncherClusterContentSearchStruct(
    ArrayList<ChipStructs.ContentLauncherClusterParameterStruct> parameterList
  ) {
    this.parameterList = parameterList;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ContentLauncherClusterContentSearchStruct {\n");
    output.append("\tparameterList: ");
    output.append(parameterList);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ContentLauncherClusterStyleInformationStruct {
  public Optional<String> imageURL;
  public Optional<String> color;
  public Optional<ChipStructs.ContentLauncherClusterDimensionStruct> size;
  public ContentLauncherClusterStyleInformationStruct(
    Optional<String> imageURL,
    Optional<String> color,
    Optional<ChipStructs.ContentLauncherClusterDimensionStruct> size
  ) {
    this.imageURL = imageURL;
    this.color = color;
    this.size = size;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ContentLauncherClusterStyleInformationStruct {\n");
    output.append("\timageURL: ");
    output.append(imageURL);
    output.append("\n");
    output.append("\tcolor: ");
    output.append(color);
    output.append("\n");
    output.append("\tsize: ");
    output.append(size);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ContentLauncherClusterBrandingInformationStruct {
  public String providerName;
  public Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> background;
  public Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> logo;
  public Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> progressBar;
  public Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> splash;
  public Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> waterMark;
  public ContentLauncherClusterBrandingInformationStruct(
    String providerName,
    Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> background,
    Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> logo,
    Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> progressBar,
    Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> splash,
    Optional<ChipStructs.ContentLauncherClusterStyleInformationStruct> waterMark
  ) {
    this.providerName = providerName;
    this.background = background;
    this.logo = logo;
    this.progressBar = progressBar;
    this.splash = splash;
    this.waterMark = waterMark;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ContentLauncherClusterBrandingInformationStruct {\n");
    output.append("\tproviderName: ");
    output.append(providerName);
    output.append("\n");
    output.append("\tbackground: ");
    output.append(background);
    output.append("\n");
    output.append("\tlogo: ");
    output.append(logo);
    output.append("\n");
    output.append("\tprogressBar: ");
    output.append(progressBar);
    output.append("\n");
    output.append("\tsplash: ");
    output.append(splash);
    output.append("\n");
    output.append("\twaterMark: ");
    output.append(waterMark);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class AudioOutputClusterOutputInfoStruct {
  public Integer index;
  public Integer outputType;
  public String name;
  public AudioOutputClusterOutputInfoStruct(
    Integer index,
    Integer outputType,
    String name
  ) {
    this.index = index;
    this.outputType = outputType;
    this.name = name;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("AudioOutputClusterOutputInfoStruct {\n");
    output.append("\tindex: ");
    output.append(index);
    output.append("\n");
    output.append("\toutputType: ");
    output.append(outputType);
    output.append("\n");
    output.append("\tname: ");
    output.append(name);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ApplicationLauncherClusterApplicationStruct {
  public Integer catalogVendorID;
  public String applicationID;
  public ApplicationLauncherClusterApplicationStruct(
    Integer catalogVendorID,
    String applicationID
  ) {
    this.catalogVendorID = catalogVendorID;
    this.applicationID = applicationID;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ApplicationLauncherClusterApplicationStruct {\n");
    output.append("\tcatalogVendorID: ");
    output.append(catalogVendorID);
    output.append("\n");
    output.append("\tapplicationID: ");
    output.append(applicationID);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ApplicationLauncherClusterApplicationEPStruct {
  public ChipStructs.ApplicationLauncherClusterApplicationStruct application;
  public Optional<Integer> endpoint;
  public ApplicationLauncherClusterApplicationEPStruct(
    ChipStructs.ApplicationLauncherClusterApplicationStruct application,
    Optional<Integer> endpoint
  ) {
    this.application = application;
    this.endpoint = endpoint;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ApplicationLauncherClusterApplicationEPStruct {\n");
    output.append("\tapplication: ");
    output.append(application);
    output.append("\n");
    output.append("\tendpoint: ");
    output.append(endpoint);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class ApplicationBasicClusterApplicationStruct {
  public Integer catalogVendorID;
  public String applicationID;
  public ApplicationBasicClusterApplicationStruct(
    Integer catalogVendorID,
    String applicationID
  ) {
    this.catalogVendorID = catalogVendorID;
    this.applicationID = applicationID;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("ApplicationBasicClusterApplicationStruct {\n");
    output.append("\tcatalogVendorID: ");
    output.append(catalogVendorID);
    output.append("\n");
    output.append("\tapplicationID: ");
    output.append(applicationID);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UnitTestingClusterSimpleStruct {
  public Integer a;
  public Boolean b;
  public Integer c;
  public byte[] d;
  public String e;
  public Integer f;
  public Float g;
  public Double h;
  public UnitTestingClusterSimpleStruct(
    Integer a,
    Boolean b,
    Integer c,
    byte[] d,
    String e,
    Integer f,
    Float g,
    Double h
  ) {
    this.a = a;
    this.b = b;
    this.c = c;
    this.d = d;
    this.e = e;
    this.f = f;
    this.g = g;
    this.h = h;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UnitTestingClusterSimpleStruct {\n");
    output.append("\ta: ");
    output.append(a);
    output.append("\n");
    output.append("\tb: ");
    output.append(b);
    output.append("\n");
    output.append("\tc: ");
    output.append(c);
    output.append("\n");
    output.append("\td: ");
    output.append(Arrays.toString(d));
    output.append("\n");
    output.append("\te: ");
    output.append(e);
    output.append("\n");
    output.append("\tf: ");
    output.append(f);
    output.append("\n");
    output.append("\tg: ");
    output.append(g);
    output.append("\n");
    output.append("\th: ");
    output.append(h);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UnitTestingClusterTestFabricScoped {
  public Integer fabricSensitiveInt8u;
  public Optional<Integer> optionalFabricSensitiveInt8u;
  public @Nullable Integer nullableFabricSensitiveInt8u;
  public @Nullable Optional<Integer> nullableOptionalFabricSensitiveInt8u;
  public String fabricSensitiveCharString;
  public ChipStructs.UnitTestingClusterSimpleStruct fabricSensitiveStruct;
  public ArrayList<Integer> fabricSensitiveInt8uList;
  public Integer fabricIndex;
  public UnitTestingClusterTestFabricScoped(
    Integer fabricSensitiveInt8u,
    Optional<Integer> optionalFabricSensitiveInt8u,
    @Nullable Integer nullableFabricSensitiveInt8u,
    @Nullable Optional<Integer> nullableOptionalFabricSensitiveInt8u,
    String fabricSensitiveCharString,
    ChipStructs.UnitTestingClusterSimpleStruct fabricSensitiveStruct,
    ArrayList<Integer> fabricSensitiveInt8uList,
    Integer fabricIndex
  ) {
    this.fabricSensitiveInt8u = fabricSensitiveInt8u;
    this.optionalFabricSensitiveInt8u = optionalFabricSensitiveInt8u;
    this.nullableFabricSensitiveInt8u = nullableFabricSensitiveInt8u;
    this.nullableOptionalFabricSensitiveInt8u = nullableOptionalFabricSensitiveInt8u;
    this.fabricSensitiveCharString = fabricSensitiveCharString;
    this.fabricSensitiveStruct = fabricSensitiveStruct;
    this.fabricSensitiveInt8uList = fabricSensitiveInt8uList;
    this.fabricIndex = fabricIndex;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UnitTestingClusterTestFabricScoped {\n");
    output.append("\tfabricSensitiveInt8u: ");
    output.append(fabricSensitiveInt8u);
    output.append("\n");
    output.append("\toptionalFabricSensitiveInt8u: ");
    output.append(optionalFabricSensitiveInt8u);
    output.append("\n");
    output.append("\tnullableFabricSensitiveInt8u: ");
    output.append(nullableFabricSensitiveInt8u);
    output.append("\n");
    output.append("\tnullableOptionalFabricSensitiveInt8u: ");
    output.append(nullableOptionalFabricSensitiveInt8u);
    output.append("\n");
    output.append("\tfabricSensitiveCharString: ");
    output.append(fabricSensitiveCharString);
    output.append("\n");
    output.append("\tfabricSensitiveStruct: ");
    output.append(fabricSensitiveStruct);
    output.append("\n");
    output.append("\tfabricSensitiveInt8uList: ");
    output.append(fabricSensitiveInt8uList);
    output.append("\n");
    output.append("\tfabricIndex: ");
    output.append(fabricIndex);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UnitTestingClusterNullablesAndOptionalsStruct {
  public @Nullable Integer nullableInt;
  public Optional<Integer> optionalInt;
  public @Nullable Optional<Integer> nullableOptionalInt;
  public @Nullable String nullableString;
  public Optional<String> optionalString;
  public @Nullable Optional<String> nullableOptionalString;
  public @Nullable ChipStructs.UnitTestingClusterSimpleStruct nullableStruct;
  public Optional<ChipStructs.UnitTestingClusterSimpleStruct> optionalStruct;
  public @Nullable Optional<ChipStructs.UnitTestingClusterSimpleStruct> nullableOptionalStruct;
  public @Nullable ArrayList<Integer> nullableList;
  public Optional<ArrayList<Integer>> optionalList;
  public @Nullable Optional<ArrayList<Integer>> nullableOptionalList;
  public UnitTestingClusterNullablesAndOptionalsStruct(
    @Nullable Integer nullableInt,
    Optional<Integer> optionalInt,
    @Nullable Optional<Integer> nullableOptionalInt,
    @Nullable String nullableString,
    Optional<String> optionalString,
    @Nullable Optional<String> nullableOptionalString,
    @Nullable ChipStructs.UnitTestingClusterSimpleStruct nullableStruct,
    Optional<ChipStructs.UnitTestingClusterSimpleStruct> optionalStruct,
    @Nullable Optional<ChipStructs.UnitTestingClusterSimpleStruct> nullableOptionalStruct,
    @Nullable ArrayList<Integer> nullableList,
    Optional<ArrayList<Integer>> optionalList,
    @Nullable Optional<ArrayList<Integer>> nullableOptionalList
  ) {
    this.nullableInt = nullableInt;
    this.optionalInt = optionalInt;
    this.nullableOptionalInt = nullableOptionalInt;
    this.nullableString = nullableString;
    this.optionalString = optionalString;
    this.nullableOptionalString = nullableOptionalString;
    this.nullableStruct = nullableStruct;
    this.optionalStruct = optionalStruct;
    this.nullableOptionalStruct = nullableOptionalStruct;
    this.nullableList = nullableList;
    this.optionalList = optionalList;
    this.nullableOptionalList = nullableOptionalList;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UnitTestingClusterNullablesAndOptionalsStruct {\n");
    output.append("\tnullableInt: ");
    output.append(nullableInt);
    output.append("\n");
    output.append("\toptionalInt: ");
    output.append(optionalInt);
    output.append("\n");
    output.append("\tnullableOptionalInt: ");
    output.append(nullableOptionalInt);
    output.append("\n");
    output.append("\tnullableString: ");
    output.append(nullableString);
    output.append("\n");
    output.append("\toptionalString: ");
    output.append(optionalString);
    output.append("\n");
    output.append("\tnullableOptionalString: ");
    output.append(nullableOptionalString);
    output.append("\n");
    output.append("\tnullableStruct: ");
    output.append(nullableStruct);
    output.append("\n");
    output.append("\toptionalStruct: ");
    output.append(optionalStruct);
    output.append("\n");
    output.append("\tnullableOptionalStruct: ");
    output.append(nullableOptionalStruct);
    output.append("\n");
    output.append("\tnullableList: ");
    output.append(nullableList);
    output.append("\n");
    output.append("\toptionalList: ");
    output.append(optionalList);
    output.append("\n");
    output.append("\tnullableOptionalList: ");
    output.append(nullableOptionalList);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UnitTestingClusterNestedStruct {
  public Integer a;
  public Boolean b;
  public ChipStructs.UnitTestingClusterSimpleStruct c;
  public UnitTestingClusterNestedStruct(
    Integer a,
    Boolean b,
    ChipStructs.UnitTestingClusterSimpleStruct c
  ) {
    this.a = a;
    this.b = b;
    this.c = c;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UnitTestingClusterNestedStruct {\n");
    output.append("\ta: ");
    output.append(a);
    output.append("\n");
    output.append("\tb: ");
    output.append(b);
    output.append("\n");
    output.append("\tc: ");
    output.append(c);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UnitTestingClusterNestedStructList {
  public Integer a;
  public Boolean b;
  public ChipStructs.UnitTestingClusterSimpleStruct c;
  public ArrayList<ChipStructs.UnitTestingClusterSimpleStruct> d;
  public ArrayList<Long> e;
  public ArrayList<byte[]> f;
  public ArrayList<Integer> g;
  public UnitTestingClusterNestedStructList(
    Integer a,
    Boolean b,
    ChipStructs.UnitTestingClusterSimpleStruct c,
    ArrayList<ChipStructs.UnitTestingClusterSimpleStruct> d,
    ArrayList<Long> e,
    ArrayList<byte[]> f,
    ArrayList<Integer> g
  ) {
    this.a = a;
    this.b = b;
    this.c = c;
    this.d = d;
    this.e = e;
    this.f = f;
    this.g = g;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UnitTestingClusterNestedStructList {\n");
    output.append("\ta: ");
    output.append(a);
    output.append("\n");
    output.append("\tb: ");
    output.append(b);
    output.append("\n");
    output.append("\tc: ");
    output.append(c);
    output.append("\n");
    output.append("\td: ");
    output.append(d);
    output.append("\n");
    output.append("\te: ");
    output.append(e);
    output.append("\n");
    output.append("\tf: ");
    output.append(f);
    output.append("\n");
    output.append("\tg: ");
    output.append(g);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UnitTestingClusterDoubleNestedStructList {
  public ArrayList<ChipStructs.UnitTestingClusterNestedStructList> a;
  public UnitTestingClusterDoubleNestedStructList(
    ArrayList<ChipStructs.UnitTestingClusterNestedStructList> a
  ) {
    this.a = a;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UnitTestingClusterDoubleNestedStructList {\n");
    output.append("\ta: ");
    output.append(a);
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
public static class UnitTestingClusterTestListStructOctet {
  public Long member1;
  public byte[] member2;
  public UnitTestingClusterTestListStructOctet(
    Long member1,
    byte[] member2
  ) {
    this.member1 = member1;
    this.member2 = member2;
  }

  @Override
  public String toString() {
    StringBuilder output = new StringBuilder();
    output.append("UnitTestingClusterTestListStructOctet {\n");
    output.append("\tmember1: ");
    output.append(member1);
    output.append("\n");
    output.append("\tmember2: ");
    output.append(Arrays.toString(member2));
    output.append("\n");
    output.append("}\n");
    return output.toString();
  }
}
}
