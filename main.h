#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - struct specifier
 * @valid: the valid character
 * @f: function
 *
 */

typedef struct specifier
{
char *valid;
int (*f)(va_list);
} spec;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_percent(va_list args);
int (*get_func(char specifier))(va_list args);

#endif

