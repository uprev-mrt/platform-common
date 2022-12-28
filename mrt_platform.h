/**
  *@file platform.h
  *@brief Abstraction header
  *@author Jason Berger
  *@date 3/6/2019
  */
#ifndef MRT_PLATFORM_H
#define MRT_PLATFORM_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif
#include "mrt_platform_common.h"

#ifdef MRT_FREERTOS
#include "mrt_FreeRTOS.h"
#endif

typedef uint32_t mrt_status_t;

#define MRT_PLATFORM_NONE           0
#define MRT_STM32_HAL               1
#define MRT_ATMEL_START             2
#define MRT_ATMEL_ASF               3
#define MRT_LINUX                   4
#define MRT_ESP32                   5
#define MRT_NRF5                    6
#define MRT_PLATFORM_CUSTOM         99



#if MRT_PLATFORM == MRT_STM32_HAL
  #include "Platforms/STM32/stm32_hal_abstract.h"
  #define MRT_PLATFORM_STRING "STM32_HAL"
	#include "platform_check.h"
#endif

#if MRT_PLATFORM == MRT_ATMEL_START
  #include "Platforms/Atmel/atmel_start_abstract.h"
  #define MRT_PLATFORM_STRING "Atmel_Start"
#endif

#if MRT_PLATFORM == MRT_ATMEL_ASF
  #include "Platforms/Atmel/atmel_asf_abstract.h"
  #define MRT_PLATFORM_STRING "Atmel_ASF"
#endif

#if MRT_PLATFORM == MRT_LINUX
  #include "Platforms/Linux/linux_abstract.h"
  #define MRT_PLATFORM_STRING "Linux"
#endif

#if MRT_PLATFORM == MRT_ESP32
  #include "Platforms/ESP32/esp32_abstract.h"
  #define MRT_PLATFORM_STRING "ESP32"
#endif

#if MRT_PLATFORM == MRT_NRF5
  #include "Platforms/NRF5/nrf5_abstract.h"
  #define MRT_PLATFORM_STRING "ESP32"
#endif

#if MRT_PLATFORM == MRT_PLATFORM_CUSTOM
  #define MRT_PLATFORM_STRING "Custom"
  #message "Platform is set to custom, be sure to provide a customized 'custom_platform.h' file"
  #include "custom_platform.h"
#endif

#if MRT_PLATFORM == MRT_PLATFORM_NONE
  #define MRT_PLATFORM_STRING "NONE"
  #include "none_abstract.h"
#endif


//platform_check must be included AFTER the abstraction header
#ifndef MRT_PLATFORM_NONE
#include "platform_check.h"
#endif
#ifdef __cplusplus
}
#endif
#endif
