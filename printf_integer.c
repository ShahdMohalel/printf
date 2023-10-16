#include "main.h"

/**
 * printf_integer - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_integer(va_list args, int len)
{
	int num = va_arg(args, int);
	int digits = 0;
	int c = num;
	int digit;

	if (num < 0)
	{
		len += _putchar('-');
		num = -num;

		c = num;
	}

	do {
		digits++;
		c /= 10;
	} while (c != 0);

	while (digits > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		len += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (len);
}
