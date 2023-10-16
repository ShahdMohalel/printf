#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	va_list args;
	int i;
	int ret;
}t_list;

void _putchar(char c, int x, size_t *ret, size_t *i);
void _putcharfd(char c, int x, size_t *ret);
int _printf(const char *format, ...);
size_t _strlen(const char *str);
void printf_str(char *s, int x, size_t *ret, size_t *i);
int switcher(t_list *st, const char *args);

#endif
