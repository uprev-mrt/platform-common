/**
  *@file mrt_FreeRTOS.h
  *@brief Abstraction header FreeRTOS
  *@author Jason Berger
  *@date 8/27/2020
  */

#pragma once

#include "cmsis_os.h"


#define malloc(size) pvPortMalloc(size)
#define free(ptr) vPortFree(ptr)