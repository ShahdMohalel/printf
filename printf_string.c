#include "main.h"

/**
 * printf_string - prints a string
 * @args: numberof arguements
 * @len: the printed characters
 * Return: printed charcaters
 */

int printf_string(va_list args, int len)
{
	char *str = va_arg(args, char *);

	int x = 0;
	char *nl = "(null)";
	if (*str == '\0')
	{
		while (x < 6)
		{
			_putchar(nl[x]);
			x++;
		}
	}
	else
	{
		while (*str != '\0')
		{
			_putchar(*str);
			len++;
			str++;
		}
	}
	return (len);
}
