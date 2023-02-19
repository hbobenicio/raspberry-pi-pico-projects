cmake_minimum_required(VERSION 3.24.0)

# initialize pico-sdk from GIT
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_FETCH_FROM_GIT on)
include("${CMAKE_SOURCE_DIR}/pico_sdk_import.cmake")

project("hello-pico" LANGUAGES C CXX)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(${PROJECT_NAME} "${CMAKE_SOURCE_DIR}/main.c")
target_link_libraries(${PROJECT_NAME} pico_stdlib)

# create map/bin/hex file etc.
pico_add_extra_outputs(${PROJECT_NAME})

# add url via pico_set_program_url
# example_auto_set_url(${PROJECT_NAME})
