#include "main.h"
/**
 * print_num - prints the num
 * @args: arguments
 * Return: The number of args
 */

int print_num(va_list args)
{
	int n, div, len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_integer - Prints an integer
 * @args: arguments
 * Return: num of char
 */

int print_integer(va_list args)
{
	int nlen;

	nlen = print_num(args);
	return (nlen);
}
