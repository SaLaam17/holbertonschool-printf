#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * struct type_format - new struct type
 * @letter: a char representing a data type.
 * @function_pointer: function pointer to a function that prints
 * a data type corresponding to letter.
 */

typedef struct type_format
{
	char letter;
	int (*function_pointer)(va_list args);
} format_t;

#endif
