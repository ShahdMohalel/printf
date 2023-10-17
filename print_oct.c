#include "main.h"
/**
 * print_oct - Prints octal
 * @args: args
 * Return: Number
 */
int print_oct(va_list args)
{
	unsigned int n;
	int i, len;
	char *str;
	char *rev_str;

	n = va_arg(args, unsigned int);
	if (n == NULL)
		return (_putchar('0'));
	if (n < 1)
		return (-1);

	len = base(n / 8);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; n > 0; i++)
	{
		if(n % 8)
			str[i] = '0';
		else
			str[i] = '1';

		n /= 8;
	}

	str[len] = '\0';
	rev_str = rev_string(str);

	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
