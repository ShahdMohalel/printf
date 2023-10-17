#include "main.h"

/**
 * print_uh - print
 * @args: arguments
 * Return: Number
 */

int print_uh(va_list args)
{
	unsigned int num;
	int len, rem;
	char *hex;
	char *rev_hex;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base(num, 16);
	hex = malloc(sizeof(char) * len + 1);
	if (hex == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem = num % 16;
		if (rem > 9)
		{
			rem = hexadec(rem, 'X');
			hex[len] = rem;
		}
		else
			hex[len] = rem + 48;
		num = num / 16;
	}
	hex[len] = '\0';
	rev_hex = rev_string(hex);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex);
	free(rev_hex);
	return (len);
}
