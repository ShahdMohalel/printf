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
    va_list ptr;
    va_start(ptr, format);

    if(!format || (format[0] == '%' && !format[1]))
	    return (-1);

    if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

    while (*format != '\0')
    {

	        if (*format == '%')
        	{
	            format++;

        	    if (*format == 'c')
            	{
	                int c = va_arg(ptr, int);
        	        _putchar(c);
                	len++;
	            }
        	    else if (*format == 's')
	            {
        	        char *s = va_arg(ptr, char *);
	                while (*s != '\0')
        	        {
                	    _putchar(*s);
	                    len++;
        	            s++;
                	}
	            }
        	    else if (*format == '%')
	            {
	                _putchar('%');
        	        len++;
	            }	
        	    else
	            {
        	        _putchar('%');
	                _putchar(*format);
        	        len += 2;
	            }
        	}

	        else
        	{
			if(*format == ' ')
				_putchar(' ');
			else
	            	_putchar(*format);

        	    len++;
	       	}

	        format++;
    }

    va_end(ptr);
    return (len);
}
