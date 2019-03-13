/**
  *@file platform.h
  *@brief Prints warning about incomplete platform Abstraction
  *@author Jason Berger
  *@date 3/6/2019
  */

#define NOT_DEFINED_WARNING " was not defined in the current platform abstraction"

#ifdef MRT_PLATFORM
  #pragma( "MrT Platform: " + MRT_PLATFORM)
#endif
#ifndef MRT_PLATFORM
  #error "No platform abstraction is defined! Make sure one is defined in your project"
  /*To use a platform, define the symbol for it
   * example: add '-DMRT_PLATFORM_STM32_HAL' as a flag when compiling to target the Stm32 HAL platform
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
#ifndef MRT_GPIO_READ
  #define MRT_GPIO_READ( ... )
  #warning "MRT_GPIO_READ" NOT_DEFINED_WARNING
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

//Parallel Abstraction
#ifndef MRT_PBUS_MODE
  #define MRT_PBUS_MODE( ... )
  #warning "MRT_PBUS_MODE" NOT_DEFINED_WARNING
#endif

#ifndef MRT_PBUS_WRITE
  #define MRT_PBUS_WRITE( ... )
  #warning "MRT_PBUS_WRITE" NOT_DEFINED_WARNING
#endif

#ifndef MRT_PBUS_READ
  #define MRT_PBUS_READ( ... )
  #warning "MRT_PBUS_READ" NOT_DEFINED_WARNING
#endif

  //printf
#ifndef MRT_PRINTF
  #define MRT_PRINTF( ... )
  #warning "MRT_PRINTF" NOT_DEFINED_WARNING
#endif
