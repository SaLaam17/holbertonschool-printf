#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
* _printf - function that produces output according to a format.
* Description: function that produces output according to a format.
* @format: A string of characters representing the argument types.
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int i = 0, j;
	format_t array[] ={
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	if (format == NULL)
	return (-1);
	
	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (array[j].letter != '\0')
			{
				if (format[i] == array[j].letter)
				{
					count += array[j].function_pointer(args);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
