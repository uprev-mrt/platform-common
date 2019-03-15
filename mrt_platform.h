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
#include "mrt_platform_common.h"
typedef uint32_t mrt_status_t;

#ifdef MRT_PLATFORM_STM32_HAL
  #define MRT_PLATFORM "STM32"
  #include "Platforms/STM32/stm32_hal_abstract.h"
#endif

#ifdef MRT_PLATFORM_ATMEL_START
  #define MRT_PLATFORM "ATMEL_START"
  #include "Platforms/Atmel/atmel_start_abstract.h"
#endif

#ifdef MRT_PLATFORM_ATMEL_ASF
  #define MRT_PLATFORM "ATMEL_ASF"
  #include "Platforms/Atmel/atmel_asf_abstract.h"
#endif

#ifdef MRT_PLATFORM_LINUX
  #define MRT_PLATFORM "LINUX"
#endif

#ifdef MRT_PLATORM_CUSTOM
  #define MRT_PLATFORM "CUSTOM"
  #message "Platform is set to custom, be sure to provide a customized 'custom_platform.h' file"
  #include "custom_platform.h"
#endif


//platform_check must be included AFTER the abstraction header
#include "platform_check.h"

#endif
