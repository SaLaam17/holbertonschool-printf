#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * recursive - writes the number to stdout
 * @number: The number to print
 */

void recursive(int number)
{
	int modulo = 0;

	if (number < 1)
		return;
	modulo = number % 10;
	number = number / 10;
	recursive(number);
	_putchar(modulo + '0');
}

/**
 * count_size - count the number of digits printed
 * @number: number to print
 * Return: the number of digits printed
 */

int count_size(int number)
{
	int i = 0;

	while(number >= 1)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

/**
 * print_number - function that prints an integer.
 * @args: A va_list pointing to the string to be printed.
 * Return: The number of characters printed
 */

int print_number(va_list args)
{
	int count = 0;
	int number = va_arg(args, int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}
	recursive(number);
	count += count_size(number);
	return (count);
}
