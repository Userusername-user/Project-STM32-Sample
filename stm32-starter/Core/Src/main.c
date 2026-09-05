/* main.c - STM32 + FreeRTOS starter */
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"

static void StartDefaultTask(void *argument)
{
    (void)argument;

    for (;;)
    {
        /* Add application work here. */
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

int main(void)
{
    HAL_Init();
    SystemClock_Config();

    /* Initialize GPIO/UART/peripherals here. */

    if (xTaskCreate(
            StartDefaultTask,
            "DefaultTask",
            256,
            NULL,
            tskIDLE_PRIORITY + 1,
            NULL) != pdPASS)
    {
        /* Task creation failed. */
        for (;;) {}
    }

    vTaskStartScheduler();

    /* The scheduler should not return unless there is insufficient heap. */
    for (;;) {}
}