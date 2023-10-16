#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @printed: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int selector(const char *format, va_list args, int printed)
{
	if(*format)
	{
		if(format == 'c')
		{
			_putchar(va_arg(args, int));
			len++;
		}
		else if(format == 's')
			len = printf_string(args, len);
		else
		{
			_putchar('%');
			len++;
		}
	}
	return (len);
}
