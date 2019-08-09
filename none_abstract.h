/**
  *@file none_abstract
  *@brief Abstraction header for no platform
  *@author Jason Berger
  *@date 8/9/2019
  */


//Mutex Abstraction
#define MRT_MUTEX_TYPE uint8_t
#define MRT_MUTEX_CREATE(m) (m) = 0
#define MRT_MUTEX_LOCK(m) (m) = 1
#define MRT_MUTEX_UNLOCK(m) (m) = 0
#define MRT_MUTEX_DELETE(m) (m) = 0
