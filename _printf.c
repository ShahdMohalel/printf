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
	int len = 0;
	int i = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len = switcher(format, args, len);

			if (len == '\0')
			{
				if (format[i + 1] == '%')
	            {
		            write(1, &format[i+1], 1);
		            return (1);
	            }
	            else
    	        {
	    	    write(1, &format[i], 1);
	    	    write(1, &format[i+1], 1);
	    	    return (2);
	            }
			}
			else
			{
			    i++;
			    format++;
		    }
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
