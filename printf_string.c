#include "main.h"
/**
 *print_string - prints a string to stdout,1 char at a time
 *
 *@args: args to increment
 *@len: length
 *
 *Return:no of char printed
 */
int printf_string(va_list args, int len)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		len++;
		string++;
	}
	return (len);
}
