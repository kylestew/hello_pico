cmake_minimum_required(VERSION 3.12)

# initialize pico_sdk from submodule
# note: this must happen before project()
set(PICO_SDK_PATH "./pico-sdk")
include(pico-sdk/pico_sdk_init.cmake)

project(HelloPico)

pico_sdk_init()

add_executable(HelloPico 
    main.c
    )

target_link_libraries(HelloPico pico_stdlib)

pico_add_extra_outputs(HelloPico)

