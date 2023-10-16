#include "main.h"

/**
 * switcher - selects the appropriate specifiers
 * @args: number of arguements
 * @len: length printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */
int switcher(const char *format, va_list args, int len)
{
	while(format)
	{
		if(format == 'c')
		{
			_putchar(va_arg(args, char));
			len++;
		}
		else if(format == '%')
		{
			_putchar('%');
			len++l
		}
		else if(format == 's')
			printf_str(args, len);

	}
}
/**
 * printf_str - print strings
 * @args: number of arguements
 * @len: length printed characters
 * Return: printed charcaters
 */
int printf_str(va_list args, int len)
{
	char *str = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*str);
		len++;
		str++;
	}
	return (len);
}


