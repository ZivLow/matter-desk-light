cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/third_party/connectedhomeip/examples/common/cmake/idf_flashing.cmake)

set(EXTRA_COMPONENT_DIRS
    "${CMAKE_CURRENT_LIST_DIR}/third_party/connectedhomeip/config/esp32/components"
    "${CMAKE_CURRENT_LIST_DIR}/third_party/connectedhomeip/examples/common/QRCode"
)

project(desk-light)

idf_build_set_property(CXX_COMPILE_OPTIONS "-std=gnu++23;-Os;-DCHIP_HAVE_CONFIG_H;-Wno-missing-field-initializers;-Wno-deprecated-declarations" APPEND)
idf_build_set_property(C_COMPILE_OPTIONS "-std=gnu17;-Os" APPEND)

flashing_script()