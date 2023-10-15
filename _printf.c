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

    if(!(format) || !(*format))
	    return ('\0');

    va_start(ptr, format);

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
		if(*s == '\0')
			return ('\0');
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
            _putchar(*format);
            len++;
        }

        format++;
    }

    va_end(ptr);
    return len;
}
