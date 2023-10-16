#include "main.h"

/**
 * _printf - The printf function clone
 * @format: a constant pointer to a char
 *
 * Return: the size of the printed args
 */

int _printf(const char *format, ...)
{
	va_list args;
	int digit;
	unsigned int n;
	char chr;
	char *strarg;
	int len = 0;

	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				len += print_char('%');
			}
			else if (*format == '\0')
			{
				break;
			}
			else
			{
				switch (*format)
				{
					case 'c':
						chr = (va_arg(args, int));
						len += print_char(chr);
						break;
					case 's':
						strarg = (va_arg(args, char *));
						len += print_string(strarg);
						break;
					case 'd':
					case 'i':
						digit = va_arg(args, int);
						if (digit < 0)
						{
							len++;
						}
						len += getNumberLength(digit);
						check_number(digit);
						break;
					case 'b':
						n = va_arg(args, unsigned int);
					    	len += dtob(n, len);
					    	break;
					default:
						len += print_char('%');
						len += print_char(*format);
						break;
				}
			}
		}
		else
		{
			len += print_char(*format);
		}
		format++;
	}
	va_end(args);
	return (len);
}
