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
	int i;
    int len = 0;
    va_list ptr;
    va_start(ptr, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == 'c')
            {
                int c = va_arg(ptr, int);
                len += _putchar(c);
                i++;
            }
            else if (format[i + 1] == 's')
            {
                char *s = va_arg(ptr, char *);
                while (*s != '\0')
                {
                    len += _putchar(*s);
                    s++;
                }
                i++;
            }
            else if (format[i + 1] == '%')
            {
                len += _putchar('%');
                i++;
            }
        }
        else
        {
            len += _putchar(format[i]);
        }
    }

    va_end(ptr);
    return (len);
}
