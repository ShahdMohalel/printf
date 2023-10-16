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
	char *str;
	int i;
	char c;

	str = va_arg(args, char *);
	if (*str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		write(1, &c, 1);
		len++;
	}
	return (len);
}
