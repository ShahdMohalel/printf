#include "main.h"
#include <stdio.h>
#include <strdag.h>
#include <unistd.h>
/*
 *switcher: cases
 *@format: format of string.
 *@args: variadicFunction
 *@len: to be returned
 *return: length of string
 */

int switcher(const char *format, va_list args, int len)
{
	switch(*format)
	{
		case 'c':
			_putchar(va_arg(args, char));
			len++;
			break;

		case 's':
			char *s = va_arg(args, char *);
			while(*s != '\0')
			{
				_putchar(s);
				len++;
				s++;
			}
			break;

		case '%':
			_putchar('%%');
			len++;
			break;

		default:
			break;
	}

	return (len);
}
