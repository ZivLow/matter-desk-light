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

#pragma once

/**
 *  @def CHIP_CONFIG_MAX_FABRICS
 *
 *  @brief
 *    Maximum number of fabrics the device can participate in.  Each fabric can
 *    provision the device with its unique operational credentials and manage
 *    its own access control lists.
 */
#define CHIP_CONFIG_MAX_FABRICS 5 // 5 is the minimum number of supported fabrics

/**
 * @def CHIP_IM_MAX_NUM_SUBSCRIPTIONS
 *
 * @brief Defines the maximum number of ReadHandler for subscriptions, limits the number of active subscription transactions on
 * server.
 *
 */
#define CHIP_IM_MAX_NUM_SUBSCRIPTIONS 45

/**
 * @def CHIP_CONFIG_PERSIST_SUBSCRIPTIONS
 *
 * @brief Defines whether to enable resubcription logic
 *
 */
#define CHIP_CONFIG_PERSIST_SUBSCRIPTIONS 1

/**
 * @def CHIP_CONFIG_SUBSCRIPTION_TIMEOUT_RESUMPTION
 *
 * @brief Defines whether to enable resubcription logic
 *
 */
#define CHIP_CONFIG_SUBSCRIPTION_TIMEOUT_RESUMPTION 1

/**
 * @def CHIP_DEVICE_CONFIG_USE_TEST_SETUP_PIN_CODE
 *
 * @brief Defines test setup pin code
 * 
 * range: 0x01-0x5F5E0FE (1-99999998) 20202021 is used to indicate that the test pin code is not set.
 *
 */
#define CHIP_DEVICE_CONFIG_USE_TEST_SETUP_PIN_CODE 20240205

/**
 * @def CHIP_DEVICE_CONFIG_USE_TEST_SETUP_DISCRIMINATOR
 *
 * @brief Defines test setup discriminator.
 * 
 * range: 0x0-0xFFF, 0xF00 is used to indicate that the test discriminator is not set.
 *
 */
#define CHIP_DEVICE_CONFIG_USE_TEST_SETUP_DISCRIMINATOR 1234

/**
 * @def CHIP_DEVICE_CONFIG_USE_TEST_SPAKE2P_SALT
 *
 * @brief Defines SPAKE2P PBKDF2 iteration count.
 * 
 * Range: 1000-100000
 * Default: 1000
 *
 */
#define CHIP_DEVICE_CONFIG_USE_TEST_SPAKE2P_ITERATION_COUNT 1000

/**
 * @def CHIP_DEVICE_CONFIG_USE_TEST_SPAKE2P_SALT
 *
 * @brief Defines SPAKE2P salt.
 * 
 * Salt of length 16 to 32 octets encoded in Base64.
 * Default: "U1BBS0UyUCBLZXkgU2FsdA=="
 *
 */
#define CHIP_DEVICE_CONFIG_USE_TEST_SPAKE2P_SALT "U1BBS0UyUCBLZXkgU2FsdA=="

/**
 * @def CHIP_DEVICE_CONFIG_USE_TEST_SPAKE2P_VERIFIER
 *
 * @brief Defines SPAKE2P verifier.
 * 
 * Verifier of length 97 to 128 octets encoded in Base64.
 * Default: "uWFwqugDNGiEck/po7KHwwMwwqZgN10XuyBajPGuyzUEV/iree4lOrao5GuwnlQ65CJzbeUB49s31EH+NEkg0JVI5MGCQGMMT/SRPFNRODm3wH/MBiehuFc6FJ/NH6Rmzw=="
 * 
 * Generate verifier using command:
 * ${HOME}/esp/connectedhomeip/scripts/tools/spake2p/spake2p.py gen-verifier -i 1000 -s "U1BBS0UyUCBLZXkgU2FsdA==" -p 20240205
 *
 */
#define CHIP_DEVICE_CONFIG_USE_TEST_SPAKE2P_VERIFIER "bXZXB2d79kDBpEqo9xuAUpBiFa0i/qUEURgSXjj2fqgEV1+9oeY9qvuz1L2+pW00Lv7NUXLorehTPmt7aGBW8PsUu6FAVkxK87OyaLcYI/8bZG8DLeADZ4kSbeUZl7Amng=="

/**
 * @def CHIP_DEVICE_CONFIG_DEVICE_VENDOR_ID
 *
 * @brief Defines vendor ID
 *
 */
#define CHIP_DEVICE_CONFIG_DEVICE_VENDOR_ID 0xFFF3

/**
 * @def CHIP_DEVICE_CONFIG_DEVICE_PRODUCT_ID
 *
 * @brief Defines product ID
 *
 */
#define CHIP_DEVICE_CONFIG_DEVICE_PRODUCT_ID 0x8001

/**
 * @def CHIP_DEVICE_CONFIG_DEVICE_VENDOR_NAME
 *
 * @brief Defines vendor name displayed
 *
 */
#define CHIP_DEVICE_CONFIG_DEVICE_VENDOR_NAME "Ziv Low"

/**
 * @def CHIP_DEVICE_CONFIG_DEVICE_PRODUCT_NAME
 *
 * @brief Defines product name displayed
 *
 */
#define CHIP_DEVICE_CONFIG_DEVICE_PRODUCT_NAME "Desk Light"

/**
 * @def CHIP_DEVICE_CONFIG_DEFAULT_DEVICE_HARDWARE_VERSION_STRING
 *
 * @brief Defines version of hardware
 *
 */
#define CHIP_DEVICE_CONFIG_DEFAULT_DEVICE_HARDWARE_VERSION_STRING "v1.0"