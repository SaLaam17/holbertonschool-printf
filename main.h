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
 * _putchar
 * 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 * format_t - est une structure qui definit un type
 * qui permet
 * de prendre en charge plusieurs types different
 */
typedef struct type_format {
    char letter;
    int (*function_pointer)(va_list args);
}format_t;

#endif
