#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_char - function that print a char
 * @args: A va_list pointing to the character to be printed.
 * Return: the number of characters printed
*/

int print_char(va_list args)
{
	char letter = va_arg(args, int); 
	_putchar(letter); 
	return(1); 
}

/**
 * print_string - function that print a string
 * @args: A va_list pointing to the string to be printed.
*/


int print_string(va_list args) 
{
	int i;
	char *str = va_arg(args, char *); 
	if (str == NULL)
	{
		str = "(NULL)";
	}
	 i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return(i);
}
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return(1);
}
 /**
 * _printf - function that prints ...
 * Description: 
 * @format: A string of characters representing the argument types.
 */

int _printf(const char * format, ...)
{
	va_list args;
	int i = 0, j;
	format_t array[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'\0', NULL}
	};

	va_start(args, format);

    while (format[i] != '\0') 
	{
        if (format[i] == '%') 
		{
            i++;
            j = 0;
            while (array[j].letter != '\0') 
			{
                if (format[i] == array[j].letter) 
				{
                    array[j].function_pointer(args);
                    break;
                }
                j++;
            }
        } 
		else 
		{
            _putchar(format[i]);
        }
        i++;
    }
	
	va_end(args);
	return (1);
}

