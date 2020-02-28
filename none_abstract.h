/**
  *@file none_abstract
  *@brief Abstraction header for no platform
  *@author Jason Berger
  *@date 8/9/2019
  */

typedef uint32_t mrt_i2c_handle_t;
typedef uint32_t mrt_spi_handle_t;
typedef uint32_t mrt_gpio_t;


#define MRT_DELAY_MS( ... ) 0
#define MRT_UART_TX( ... ) 0
#define MRT_UART_RX( ... ) 0
#define MRT_GPIO_WRITE( ... ) 0
#define MRT_GPIO_PORT_WRITE( ... ) 0
#define MRT_GPIO_READ( ... ) 0
#define MRT_GPIO_PORT_READ( ... ) 0
#define MRT_I2C_MASTER_TRANSMIT( ... ) 0
#define MRT_I2C_MASTER_RECEIVE( ... ) 0
#define MRT_I2C_MEM_WRITE( ... ) 0
#define MRT_I2C_MEM_READ( ... ) 0
#define MRT_SPI_TRANSFER( ... ) 0
#define MRT_SPI_TRANSMIT( ... ) 0
#define MRT_SPI_RECIEVE( ... ) 0
#define MRT_PRINTF( ... ) 0


//Mutex Abstraction
#define MRT_MUTEX_TYPE uint8_t
#define MRT_MUTEX_CREATE(m) (m) = 0
#define MRT_MUTEX_LOCK(m) (m) = 1
#define MRT_MUTEX_UNLOCK(m) (m) = 0
#define MRT_MUTEX_DELETE(m) (m) = 0
