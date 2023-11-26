#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
