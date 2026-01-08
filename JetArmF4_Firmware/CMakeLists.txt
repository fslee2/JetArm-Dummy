cmake_minimum_required(VERSION 3.6)
cmake_policy(SET CMP0123 NEW) # 要求针对armclang不使用内部自动修改cpu参数完全由项目指定

add_compile_definitions(
    STM32F407xx=1
    USE_HAL_DRIVER=1
)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_C_COMPILER_WORKS TRUE)
set(CMAKE_CXX_COMPILER_WORKS TRUE)
set(CMAKE_CROSSCOMPILING TRUE)

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

set(TOOLCHAIN_PATH "C:/Keil_v5/ARM/ARMCLANG/bin")

if(WIN32)
    set(CMAKE_TOOLCHAIN_SUFFIX ".exe")
endif()

set(CMAKE_TOOLCHAIN_PREFIX "arm")

if(DEFINED TOOLCHAIN_PATH)
    set(CMAKE_TOOLCHAIN_PREFIX "${TOOLCHAIN_PATH}/${CMAKE_TOOLCHAIN_PREFIX}")
endif()

set(CMAKE_C_COMPILER ${CMAKE_TOOLCHAIN_PREFIX}clang${CMAKE_TOOLCHAIN_SUFFIX})
set(CMAKE_ASM_COMPILER ${CMAKE_C_COMPILER})
set(CMAKE_CXX_COMPILER ${CMAKE_TOOLCHAIN_PREFIX}clang${CMAKE_TOOLCHAIN_SUFFIX})

set(CMAKE_C_LINK_EXECUTABLE ${CMAKE_TOOLCHAIN_PREFIX}link${CMAKE_TOOLCHAIN_SUFFIX})
set(CMAKE_ASM_LINK_EXECUTABLE ${CMAKE_TOOLCHAIN_PREFIX}link${CMAKE_TOOLCHAIN_SUFFIX})
set(CMAKE_CXX_LINK_EXECUTABLE ${CMAKE_TOOLCHAIN_PREFIX}link${CMAKE_TOOLCHAIN_SUFFIX})

set(CMAKE_OBJCOPY ${CMAKE_TOOLCHAIN_PREFIX}objcopy${CMAKE_TOOLCHAIN_SUFFIX})
set(CMAKE_OBJDUMP ${CMAKE_TOOLCHAIN_PREFIX}objdump${CMAKE_TOOLCHAIN_SUFFIX})
set(CMAKE_SIZE ${CMAKE_TOOLCHAIN_PREFIX}objcopy${CMAKE_TOOLCHAIN_SIZE})

message(STATUS ${CMAKE_C_COMPILER})

add_compile_options(
    "-xc"
    "-std=gnu11"
    "--target=arm-arm-none-eabi"
    "-mcpu=cortex-m4"
    "-mfpu=fpv4-sp-d16"
    "-mfloat-abi=hard"
    "-c"
    "-fno-rtti"
    "-funsigned-char"
    "-fshort-enums"
    "-fshort-wchar"
    "-ffunction-sections"
    "-gdwarf-4"
    "-Wno-sign-conversion"
    "-Wno-nonportable-include-path"
    "-Wno-reserved-id-macro"
    "-Wno-unused-macros"
    "-Wno-documentation-unknown-command"
    "-Wno-documentation"
    "-Wno-license-management"
    "-Wno-parentheses-equality"
    "-Wno-reserved-identifier"
)

set(CMAKE_C_FLAGS "")
set(CMAKE_C_FLAGS_DEBUG "-O0")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS}")

set(CMAKE_ASM_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}")
set(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}")

set(CMAKE_EXE_LINKER_FLAGS "")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS}")

Message(STATUS ${CMAKE_C_FLAGS})

project(JetArmF4_Firmware LANGUAGES C ASM)

include_directories(
    "C:/Users/lucas/AppData/Local/Arm/Packs/Keil/ARM_Compiler/1.7.2/Include"
    "C:/Users/lucas/AppData/Local/Arm/Packs/Keil/STM32F4xx_DFP/2.17.1/Drivers/CMSIS/Device/ST/STM32F4xx/Include"
    "Core/Inc"
    "Drivers/CMSIS/Include"
    "Drivers/CMSIS/Device/ST/STM32F4xx/Include"
    "Drivers/STM32F4xx_HAL_Driver/inc/Legacy"
    "Drivers/STM32F4xx_HAL_Driver/Inc"
    "Drivers/STM32F4xx_HAL_Driver/Inc/Legacy"
    "Middlewares/Third_Party/FreeRTOS/Source/include"
    "Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2"
    "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F"
    "Hiwonder"
    "Hiwonder/Misc"
    "Hiwonder/Peripherals"
    "Hiwonder/Portings"
    "Hiwonder/System"
    "Third_Party/Lw"
    "Third_Party"
)

set(SOURCE_FILES
    "Core/Src/main.c"
)

add_executable(${PROJECT_NAME}.elf ${SOURCE_FILES})

set(LINKER_SCRIPT "${CMAKE_SOURCE_DIR}/STM32F407VETx_FLASH.ld")

target_link_options(${PROJECT_NAME}.elf PUBLIC
    "-T"
    "${LINKER_SCRIPT}"
    "-nostartfiles"
    "-Xlinker"
    "--gc-sections"
    "-Wl,-Map=${CMAKE_BINARY_DIR}/${PROJECT_NAME}.map"
    "--specs=nano.specs"
    "--specs=nosys.specs"
)

target_link_libraries(${PROJECT_NAME}.elf PUBLIC -Wl,--start-group
    "printf"
    -Wl,--end-group)

set(HEX_FILE ${PROJECT_BINARY_DIR}/${PROJECT_NAME}.hex)
set(BIN_FILE ${PROJECT_BINARY_DIR}/${PROJECT_NAME}.bin)
add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -Oihex $<TARGET_FILE:${PROJECT_NAME}.elf> ${HEX_FILE}
    COMMAND ${CMAKE_OBJCOPY} -Obinary $<TARGET_FILE:${PROJECT_NAME}.elf> ${BIN_FILE}
    COMMENT "Building ${HEX_FILE} \nBuilding ${BIN_FILE}")
