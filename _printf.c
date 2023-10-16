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
	t_list *st;
	int len = 0, length;
	st = (t_list *)malloc(sizeof(t_list));
	st->i = 0;
	st->ret = 0;
	va_start(st->args, format);

	while(format[st->i])
	{
		if(format[st->i] == '%')
		{
			if(format[++st->i] == '%')
				_putchar(format[st->i], 1, &st->ret, &st->i);
			else
				switcher(st, format);
		}
		else
			_putcharfd(format[st->i++], 1, &st->rat);
	}
	va_end(st->args);
	length = st->len;
	free(st);
	return (length);
}
