#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_percent - prints the percent sign
 * @args: va_list argument (not used in this case)
 * Return: number of characters printed (always 1 for '%')
 */

int print_percent(va_list args)
{
	(void)args;

	putchar('%');
	return (1);
}

