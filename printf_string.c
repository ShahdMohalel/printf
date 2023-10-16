#include "main.h"

/**
 * printf_string - prints a string
 * @args: numberof arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_string(va_list args, int len)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		len++;
		str++;
	}
	return (len);
}
