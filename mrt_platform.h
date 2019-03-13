/**
  *@file platform.h
  *@brief Abstraction header
  *@author Jason Berger
  *@date 3/6/2019
  */

typedef uint32_t mrt_status_t;

#ifdef MRT_PLATFORM_STM32_HAL
  #define MRT_PLATFORM "STM32"
  #include "Platforms/Stm32_HAL/stm32_hal_abstract.h"
#endif

#ifdef MRT_PLATFORM_ATMEL_START
  #define MRT_PLATFORM "ATMEL_START"
  #include "Platforms/AtmelStart/atmel_start_abstract.h"
#endif

#ifdef MRT_PLATFORM_ATMEL_ASF
  #define MRT_PLATFORM "ATMEL_ASF"
  #include "Platforms/AtmelStart/atmel_asf_abstract.h"
#endif

#ifdef MRT_PLATORM_CUSTOM
  #define MRT_PLATFORM "CUSTOM"
  #message "Platform is set to custom, be sure to provide a customized 'custom_platform.h' file"
  #include "custom_platform.h"
#endif

#define MRT_STATUS_OK 0
#define MRT_STATUS_ERROR 1

#define MRT_HIGH 1
#define MRT_LOW 0

//platform_check must be included AFTER the abstraction header
#include "platform_check.h"
