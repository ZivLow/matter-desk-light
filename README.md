# Matter ESP32 Project

This project creates a Matter-capable PWM-controlled light, that can be controlled using capacitive buttons or using Home Assistant/Apple HomeKit/Google Home through Matter API.

## Schematic

![electrical schematic](schematics/desk-light.png)

## Thirdparty folder softlink to matter

```bash
ln -s ${HOME}/esp/connectedhomeip ./third_party
```

## Erase NVS storage to clear WIFI credentials

```bash
esptool.py erase_region 0x10000 0xD000
```

## Matter ZAP

Matter ZAP files are used to create the endpoints and clusters on the device.

# Create ZAP

1. Start ZAP Tool

```
${HOME}/esp/connectedhomeip/scripts/tools/zap/run_zaptool.sh
```

2. Create Endpoint 0 with Matter Root Node
3. Create Endpoint 1,2,3,... for the actual device
4. File -> Save As -> Choose Project/Common Folder to save at -> Filename should end with `.zap`

## Edit ZAP

```
${HOME}/esp/connectedhomeip/scripts/tools/zap/run_zaptool.sh $PATH_TO_ZAP_FILE
```

# Create Matter

```
${HOME}/esp/connectedhomeip/scripts/tools/zap/generate.py $PATH_TO_ZAP_FILE
```

# Code Pre-generate (Optional)

## Running pre-generate

- Change --input-glob `*dimmable-light*` to the filename of `.zap` and `.matter`
- Change --external-root to parent directory of `.zap` and `.matter` files

```
${HOME}/esp/connectedhomeip/scripts/codepregen.py --input-glob "*dimmable-light*" --external-root ${HOME}/Documents/ESP-IDF_Projects/pwm-test/ ${OUTPUT_DIRECTORY:-./zzz_pregenerated/}
```

# Matter Setup

[Building Matter](https://project-chip.github.io/connectedhomeip-doc/guides/BUILDING.html)

# ESP-IDF Setup

[Building ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html)

# Environment

Tested on:
OS: Ubuntu 22.04
*Note* Matter can only be built on linux systems.
ESP-IDF v5.2 Beta 2

- GCC 13.2
- GNU++23
- GNU17
