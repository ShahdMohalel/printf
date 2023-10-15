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
	int i, j = 0;
    int len = 0;
    va_list ptr;
    va_start(ptr, format);

    while(*format != '\0')
    {
	    for (i = 0; format[i] != '\0'; i++)
	    {
	    	format++;
		    switch(*format)
		    {
			    case 'c':
	                	int c = va_arg(ptr, int);
	        	        _putchar(c);
				len++;
        	       		format++;
				break;

			    case 's':
		                char *s = va_arg(ptr, char *);
        		        while (s[j] != '\0')
               	 		{
					 _putchar(s[j]);
					 len++;
					j++;
        	        	}
                		format++;
				break;

			case '%':
        	       		_putchar('%');
				len ++;
                		format++;
				break;

			default:
        	   		 _putchar(format[i]);
				 len++;
				 break;
	        }
	    }
    }

    va_end(ptr);
    return (len);
}
