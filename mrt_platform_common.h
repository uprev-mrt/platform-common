/**
  *@file mrt_platform_common.h
  *@brief common macros to use with all platforms
  *@author Jason Berger
  *@date 03/13/2019
  *
  *   This file should be included by all platform abstraction headers
  */

#ifndef MRT_PLATFORM_COMMON_H_
#define MRT_PLATFORM_COMMON_H_

#define MRT_STATUS_OK 0
#define MRT_STATUS_ERROR 1

//GPIO Pin States
#define MRT_HIGH 1
#define MRT_LOW 0
#define MRT_DIR_OUTPUT 1
#define MRT_DIR_INPUT 0

/*****			Parallel Bus			*****/
#define PBUS_MODE_DATA 0
#define PBUS_MODE_CMD  1



#endif /* MRT_PLATFORM_COMMON_H_ */
