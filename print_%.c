#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int printPercent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

