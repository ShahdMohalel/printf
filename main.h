#ifndef FUNCTION
#define FUNCTION
#include <stdio.h>
#include <strdag.h>
#include <unistd.h>

int switcher(const char *format, va_list args, int len);
int _putchar(char c);

int _printf(const char *format, ...);
#endif
