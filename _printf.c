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

    while(*format != '\0')
    {
	    format++;
	    switch(*format)
	    {
		    case 'c':
	                int c = va_arg(ptr, int);
        	        len += _putchar(c);
               		format++;
			break;

		    case 's':
	                char *s = va_arg(ptr, char *);
        	        while (*s != '\0')
               	 	{
				 len += _putchar(*s);
				s++;
                	}
                	format++;
			break;

		case '%':

               		 len += _putchar('%');
                	format++;
			break;

		default:
           		 len += _putchar(format[i]);
			 break;
        }
    }

    va_end(ptr);
    return (len);
}
