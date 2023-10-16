#include "main.h"

/**
 * switcher - selects the appropriate specifiers
 * @args: number of arguements
 * @len: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int switcher(const char *format, va_list args, int len)
{
	if(*format)
	{
		if(*format == 'c')
		{
			_putchar(va_arg(args, int));
			len++;
		}
		else if(*format == 's')
			len = printf_string(args, len);

		else if (*format == '%')
        	{
        	    	_putchar('%');
		            len++;
       		}
		else if(*format == 'd' || *format == 'i')
        	{
        	    len = printf_integer(args, len);
        	}
        	else
        	{
			_putchar('%');
	            _putchar(*format);
        	    len += 2;
	        }
		format++;
	}
	return (len);
}
