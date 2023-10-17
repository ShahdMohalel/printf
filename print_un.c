#include "main.h"

/**
 * print_un - print
 * @args: argumets
 * Return: numbers
 */

int print_un(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (print_num(num));

	if (num < 1)
		return (-1);
	return (print_num(num));
}


/**
 * print_un - prints
 * @n: integer
 * Return: numbers printed
 */

int print_num(unsigned int n)
{
	int div, len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}
