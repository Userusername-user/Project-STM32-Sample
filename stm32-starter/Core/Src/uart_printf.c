/* uart_printf.c - optional UART printf helper */
#include "uart_printf.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * Replace this stub with your MCU-specific UART handle.
 * Example:
 * extern UART_HandleTypeDef huart1;
 */

void uart_printf(const char *fmt, ...)
{
    char buffer[256];
    va_list args;

    va_start(args, fmt);
    (void)vsnprintf(buffer, sizeof(buffer), fmt, args);
    va_end(args);

    /* Send buffer with HAL_UART_Transmit() after adding your UART handle. */
}