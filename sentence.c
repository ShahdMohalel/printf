#include "main.h"
#include <unistd.h>

/**
 * print_str - loops through a string and prints
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: number of char printed
 */
int print_str(va_list args, flags_t *f)
{
	char *s = va_arg(args, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @args: arguments from _printf
 * @f: pointer to the struct flags that determines flags
 * Return: number of char printed
 */
int print_char(va_list args, flags_t *f)
{
	(void)f;
	_putchar(va_arg(args, int));
	return (1);
}
