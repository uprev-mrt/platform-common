/**
  *@file platform.h
  *@brief Prints warning about incomplete platform Abstraction
  *@author Jason Berger
  *@date 3/6/2019
  */

#ifndef PLATFORM_CHECK_H
#define PLATFORM_CHECK_H

#define NOT_DEFINED_WARNING " was not defined in the current platform abstraction"

#ifndef MRT_SILENCE_PLATFORM_WARNINGS
  #ifdef MRT_PLATFORM
    #pragma message( "MrT Platform: "  MRT_PLATFORM_STRING)
  #endif
  #ifndef MRT_PLATFORM
    #error "No platform abstraction is defined! Make sure one is defined in your project"
    /*To use a platform, define the symbol for it
    * example: add '-DMRT_PLATFORM=MRT_STM32_HAL' as a flag when compiling to target the Stm32 HAL platform
    */
  #endif

    //Delay Abstraction
  #ifndef MRT_DELAY_MS
    #define MRT_DELAY_MS( ... )
    #warning "MRT_DELAY_MS" NOT_DEFINED_WARNING
  #endif

    //Uart Abstraction
  #ifndef MRT_UART_TX
    #define MRT_UART_TX( ... )
    #warning "MRT_UART_TX" NOT_DEFINED_WARNING
  #endif
  #ifndef MRT_UART_RX
    #define MRT_UART_RX( ... )
    #warning "MRT_UART_RX" NOT_DEFINED_WARNING
  #endif

    //GPIO Abstraction
  #ifndef MRT_GPIO_WRITE
    #define MRT_GPIO_WRITE( ... )
    #warning "MRT_GPIO_WRITE" NOT_DEFINED_WARNING
  #endif

  #ifndef MRT_GPIO_PORT_WRITE
    #define MRT_GPIO_PORT_WRITE( ... )
    #warning "MRT_GPIO_PORT_WRITE" NOT_DEFINED_WARNING
  #endif

  #ifndef MRT_GPIO_READ
    #define MRT_GPIO_READ( ... )
    #warning "MRT_GPIO_READ" NOT_DEFINED_WARNING
  #endif

  #ifndef MRT_GPIO_PORT_READ
    #define MRT_GPIO_PORT_READ( ... )
    #warning "MRT_GPIO_PORT_READ" NOT_DEFINED_WARNING
  #endif

    //I2C Abstraction
  #ifndef MRT_I2C_MASTER_TRANSMIT
    #define MRT_I2C_MASTER_TRANSMIT( ... )
    #warning "MRT_I2C_MASTER_TRANSMIT" NOT_DEFINED_WARNING
  #endif
  #ifndef MRT_I2C_MASTER_RECEIVE
    #define MRT_I2C_MASTER_RECEIVE( ... )
    #warning "MRT_I2C_MASTER_RECEIVE" NOT_DEFINED_WARNING
  #endif
  #ifndef MRT_I2C_MEM_WRITE
    #define MRT_I2C_MEM_WRITE( ... )
    #warning "MRT_I2C_MEM_WRITE" NOT_DEFINED_WARNING
  #endif
  #ifndef MRT_I2C_MEM_READ
    #define MRT_I2C_MEM_READ( ... )
    #warning "MRT_I2C_MEM_READ" NOT_DEFINED_WARNING
  #endif

    //SPI Abstraction
  #ifndef MRT_SPI_TRANSFER
    #define MRT_SPI_TRANSFER( ... )
    #warning "MRT_SPI_TRANSFER" NOT_DEFINED_WARNING
  #endif

  #ifndef MRT_SPI_TRANSMIT
    #define MRT_SPI_TRANSMIT( ... )
    #warning "MRT_SPI_TRANSMIT" NOT_DEFINED_WARNING
  #endif

  #ifndef MRT_SPI_RECIEVE
    #define MRT_SPI_RECIEVE( ... )
    #warning "MRT_SPI_RECIEVE" NOT_DEFINED_WARNING
  #endif


    //printf
  #ifndef MRT_PRINTF
    #define MRT_PRINTF( ... )
    #warning "MRT_PRINTF" NOT_DEFINED_WARNING
  #endif
#endif

#ifndef MRT_MUTEX_TYPE
  #define MRT_MUTEX_TYPE uint8_t
  #define MRT_MUTEX_CREATE(m) (m) = 0
  #define MRT_MUTEX_LOCK(m) (m) = 1
  #define MRT_MUTEX_UNLOCK(m) (m) = 0
  #define MRT_MUTEX_DELETE(m) (m) =0
#endif

#endif
