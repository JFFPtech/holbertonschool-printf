# holbertonschool-printf
Holberton School Printf Group Project

## Project overview

### Compilation:

All files will be compiled with gcc 4.8.4 using the flags:  -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

### Betty coding style:

All files are written in C and follows the Betty coding style.

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
* _putchar(char c)

## Function prototypes

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);


The **conversion specifier:**


The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion  specifiers:

**d:**	   decimal number to be provided for printing.

**i:**	   integer to be provided for printing

**c:**	   character to be provided for printing

**s:**	...The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

**%:**	    A per cent sign '%' is written. No argument is converted.

**Return value:**

Upon success, _printfs return the number of characters printed (excluding the null byte used to end output to strings)
A negative 1 is returned if an output error is encountered.
___

## Author
##### Javier Ferrer
##### Richard Santana

