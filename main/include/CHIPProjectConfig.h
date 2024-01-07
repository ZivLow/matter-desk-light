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