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

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;

            switch (*format)
            {
                case 'c':
                    int c = va_arg(ptr, int);
                    _putchar(c);
                    len++;
                    break;

                case 's':
                    char *s = va_arg(ptr, char *);
                    while (*s != '\0')
                    {
                        _putchar(*s);
                        len++;
                        s++;
                    }
                    break;

                case '%':
                    _putchar('%');
                    len++;
                    break;

                default:
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
