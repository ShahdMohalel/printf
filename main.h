#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_str(va_list args, int len);
int switcher(const char *format, va_list args, int len);

#endif
