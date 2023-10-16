#include "main.h"

/**
 * check_number - Print the digits of an integer and handle special cases
 * @n: The integer needs to be checked and printed
 *
 * Return: Nothing
 */
int dtob(unsigned int n, int len)
{
	int binary[32] = {0};
	int i = 0;

	if (n == 0)
	{
		print_char('0');
		len++;
		return (len);
	}

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		print_char('0' + binary[i]);
		len++;
	}

	return (len);
}
