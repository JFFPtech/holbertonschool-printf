#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...) {
    if (format == NULL) {
        return -1;
    }

    int count = 0;
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            if (format[i + 1] == '%') {
                count += _putchar('%');
                i++;
            } else {
                int (*m)(va_list) = get_func(format[i + 1]);
                if (m) {
                    count += m(args);
                } else {
                    count += _putchar(format[i]) + _putchar(format[i + 1]);
                }
                i++;
            }
        } else {
            count += _putchar(format[i]);
        }
    }

    va_end(args);
    return count;
}
