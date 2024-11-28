#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

/**
 * struct type_format - new struct type
 * @letter: a char representing a data type.
 * @function_pointer: function pointer to a function that prints
 * a data type corresponding to letter.
 */

typedef struct type_format
{
	char letter;
	int (*function_pointer)(va_list);
} format_t;

#endif
