get_filename_component(CHIP_ROOT ${CMAKE_SOURCE_DIR}/third_party/connectedhomeip REALPATH)

set(PRIV_INCLUDE_DIRS_LIST
                      "${CMAKE_CURRENT_LIST_DIR}/include"
                      
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/examples/providers"
)
set(INCLUDE_DIRS_LIST
                      "${CMAKE_CURRENT_LIST_DIR}/include"
                      "${CMAKE_CURRENT_LIST_DIR}/include/tasks"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/include/"
)
set(SRC_DIRS_LIST
                      "${CMAKE_CURRENT_LIST_DIR}"
                      "${CMAKE_CURRENT_LIST_DIR}/tasks"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/zzz_generated/app-common/app-common/zap-generated/attributes"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/zzz_generated/app-common/app-common/zap-generated"
                      "${CMAKE_SOURCE_DIR}/zzz_pregenerated/common/dimmable-light/zap/app-templates/zap-generated/"
                      "${CMAKE_SOURCE_DIR}/zzz_pregenerated/common/dimmable-light/codegen/cpp-app/app/"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/util"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/reporting"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/access-control-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/administrator-commissioning-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/basic-information"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/bindings"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/descriptor"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/diagnostic-logs-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/ethernet-network-diagnostics-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/localization-configuration-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/time-format-localization-server" 
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/fixed-label-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/user-label-server"                      
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/thread-network-diagnostics-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/wifi-network-diagnostics-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/software-diagnostics-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/switch-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/general-diagnostics-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/group-key-mgmt-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/general-commissioning-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/network-commissioning"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/operational-credentials-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/examples/platform/esp32/common"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/examples/providers"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/level-control"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/on-off-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/scenes-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/identify-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/groups-server"
                      "${CMAKE_SOURCE_DIR}/third_party/connectedhomeip/src/app/clusters/group-key-mgmt-server"
)

set(PRIV_REQUIRES_LIST chip QRCode bt nvs_flash)

set(REQUIRES_LIST driver)

idf_component_register(PRIV_INCLUDE_DIRS ${PRIV_INCLUDE_DIRS_LIST}
                       INCLUDE_DIRS ${INCLUDE_DIRS_LIST}
                       SRC_DIRS ${SRC_DIRS_LIST}
                       PRIV_REQUIRES ${PRIV_REQUIRES_LIST}
                       REQUIRES ${REQUIRES_LIST})

# Config paths for Code Pre-generation
set(CHIP_CODEGEN_PREGEN_DIR "${CMAKE_SOURCE_DIR}/zzz_pregenerated" CACHE PATH "Pre-generated directory to use instead of compile-time code generation.")
#set(CHIP_CODEGEN_PREGEN_EXTERNAL_ROOT_DIR "${CMAKE_SOURCE_DIR}" CACHE PATH "External root directory used when pre-generating code.")

include("${CHIP_ROOT}/build/chip/esp32/esp32_codegen.cmake")
chip_app_component_codegen("${CHIP_ROOT}/common/dimmable-light.matter")
chip_app_component_zapgen("${CHIP_ROOT}/common/dimmable-light.zap")

set_property(TARGET ${COMPONENT_LIB} PROPERTY CXX_STANDARD 23)
set_property(TARGET ${COMPONENT_LIB} PROPERTY C_STANDARD 17)
target_compile_options(${COMPONENT_LIB} PRIVATE "-DCHIP_HAVE_CONFIG_H")
target_compile_options(${COMPONENT_LIB} PUBLIC
           "-DCHIP_ADDRESS_RESOLVE_IMPL_INCLUDE_HEADER=<lib/address_resolve/AddressResolve_DefaultImpl.h>"
)