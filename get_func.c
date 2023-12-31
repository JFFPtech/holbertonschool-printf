#include "main.h"

/**
 * get_func - fetches the correct function specifier
 * @specifier: specifier variable
 * Return: selected function
 */

int (*get_func(char specifier))(va_list)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	while (arr[i].valid)
	{
		if (specifier == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}

