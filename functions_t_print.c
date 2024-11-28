#include "main.h"

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
 * print_char - function that print a char
 * @args: A va_list pointing to the character to be printed.
 * Return: the number of characters printed
*/

int print_char(va_list args)
{
	char letter = va_arg(args, int);

	_putchar(letter);
	return (1);
}

/**
 * print_string - function that print a string
 * @args: A va_list pointing to the string to be printed.
 * Return: length of the string
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
	return (i);
}

/**
 * print_percent - function that print a percent sign
 * @args: A va_list pointing to the string to be printed.
 * Return: 1
 */

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
