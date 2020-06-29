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
#define HIGH 1
#define LOW 0
#define MRT_DIR_OUTPUT 1
#define MRT_DIR_INPUT 0

/*****			Parallel Bus			*****/
#define PBUS_MODE_DATA 0
#define PBUS_MODE_CMD  1

/*****			Convenient Macros			*****/
#define MRT_EVERY(val, units) if((units) % (val) == 0 )
#define MRT_ON_FIRST static uint8_t __first =0; if(!__first++)

#define MRT_ABS(N) ((N<0)?(-N):(N))
#define MRT_BIT(x, n) (((x) >> n) & 1 )
#define MRT_CHECK_FLAG(x,f) ((x) & (f) == (f))
#define MRT_SWAP16(x) ((((x) & 0xff) << 8) | (((x) & 0xff00) >> 8))
#define MRT_SWAP32(x) (((x) & 0xff) << 24 | ((x) & 0xff00) << 8 | ((x) & 0xff0000) >> 8 | ((x) >> 24) & 0xff)

typedef enum{
  MRT_BUS_I2C,
  MRT_BUS_SPI,
  MRT_BUS_UART
}mrt_bus_type_e;

typedef enum{
  MRT_ENDIANESS_BIG,
  MRT_ENDIANESS_LITTLE
} mrt_endianess_e;



#endif /* MRT_PLATFORM_COMMON_H_ */
