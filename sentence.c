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
	while (s != '\0')
	{
		len += _putchar(*s);
		s++;
	}
	if (!s)
	{
		s = "(null)";
		while(s)
		{
			len += _putchar(*s);
			s++;
		}
	}
	return (len);
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
