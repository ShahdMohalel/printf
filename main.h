#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
typedef struct s_list
{
	va_list	args;
	size_t	i;
	size_t	ret;
}	t_list;

int _putchar(char c);
int _printf(const char *format, ...);
size_t _strlen(const char *str);
void printf_str(char *s, int x, size_t *ret, size_t *i);
int switcher(t_list *st, const char *args);

#endif
