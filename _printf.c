#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/*
 *_printf: print.
 *@format: format of string.
 *return: length of string
 */
int _printf(const char *format, ...)
{
	int len= 0;

	va_list args;

	va_start(args, format);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if(format[0] == '%' && format[1] == '\0')
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len = switcher(format, args, len);
			format++;
		}
		else
		{
			_putchar(*format);
			len++;
			format++;
		}
	}
	va_end(args);
	return (len);
}
