#include "main.h"
/**
 * print_oct - Prints octal
 * @args: args
 * Return: Number
 */
int print_oct(va_list args)
{
	unsigned int n;
	int len;
	char *octal;
	char *rev_str;

	n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);
	len = base(n, 8);

	octal = malloc(sizeof(char) * len + 1);
	if (octal == NULL)
		return (-1);
	for (len = 0; n > 0; len++)
	{
		octal[len] = (n % 8) + 48;
		n = n / 8;

	}
	octal[len] = '\0';
	rev_str = rev_string(octal);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal);
	free(rev_str);
	return (len);
}
