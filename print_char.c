#include "main.h"

/**
 * print_char - Prints character
 * @len: arguments
 * Return: Will return the amount of characters printed.
 */

int print_char(va_list len)
{
	_putchar(va_arg(len, int));
	return (1);
}
