#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>

int print_char(char any_char);
int print_string(char *text);
int printf_integer(va_list args, int len);
int _printf(const char *format, ...);
int getNumberLength(int myNum);
void check_number(int n);
int dtob(unsigned long int n, int len);

#endif
