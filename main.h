#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

typedef struct func
{
	char c;
	int (*f)(va_list args, flags_t *f);
} func_t;

/* print_nums.c */
int print_int(va_list args, flags_t *f);
void print_num(int n);
int print_unsigned(va_list args, flags_t *f);
int count(int i);

/* _printf.c */
int _printf(const char *format, ...);

/* get_func.c */
int (*get_func(char s))(va_list, flags_t *);

/* get_flag.c */
int get_flag(char s, flags_t *f);

/* sentence.c */
int print_str(va_list args, flags_t *f);
int print_char(va_list args, flags_t *f);

/* write.c */
int _putchar(char c);
int _puts(char *str);

#endif
