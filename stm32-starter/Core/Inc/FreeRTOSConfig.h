#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

#include <stdint.h>

#define configUSE_PREEMPTION                    1
#define configCPU_CLOCK_HZ                      ( ( uint32_t ) 72000000 )
#define configTICK_RATE_HZ                      ( ( TickType_t ) 1000 )
#define configMAX_PRIORITIES                     8
#define configMINIMAL_STACK_SIZE                 ( ( uint16_t ) 128 )
#define configTOTAL_HEAP_SIZE                    ( ( size_t ) ( 16 * 1024 ) )
#define configMAX_TASK_NAME_LEN                  16
#define configUSE_16_BIT_TICKS                   0
#define configIDLE_SHOULD_YIELD                  1
#define configUSE_MUTEXES                        1
#define configUSE_RECURSIVE_MUTEXES              1
#define configUSE_COUNTING_SEMAPHORES             1
#define configUSE_TIMERS                         1
#define configTIMER_TASK_PRIORITY                 ( configMAX_PRIORITIES - 1 )
#define configTIMER_QUEUE_LENGTH                  8
#define configTIMER_TASK_STACK_DEPTH              configMINIMAL_STACK_SIZE

#define configSUPPORT_DYNAMIC_ALLOCATION          1
#define configSUPPORT_STATIC_ALLOCATION           0

#define INCLUDE_vTaskDelay                       1
#define INCLUDE_xTaskGetSchedulerState           1

#define configASSERT( x ) if ((x) == 0) { taskDISABLE_INTERRUPTS(); for (;;) {} }

#endif /* FREERTOS_CONFIG_H */