#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int format_reciever(const char *format, conver_t f_list[], va_list arg_list);
int print_percent(va_list);
int print_char(va_list);
int print_string(va_list);
int print_num(va_list args);
int print_integer(va_list args);
int _puts(char *str);
int print_binary(va_list);
int hexadecimal(unsigned int num);
int _sprintf(va_list args);
unsigned int base(unsigned int n, int base);
void write_base(char *str);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_oct(va_list);
int print_un_num(unsigned int n);
int print_un(va_list args);
<<<<<<< HEAD
int print_lh(va_list args);
int print_uh(va_list args);
int hexadec(int n, char x);
=======
int _print_int(long int num);
>>>>>>> e2d52b2b9a626e0fb1273fd812fb717ace3510c4
#endif
