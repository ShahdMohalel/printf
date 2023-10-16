#include <stdio.h>
#include "main.h"
/**
 * dtob - Convert an unsigned integer to binary and count characters.
 * @n: The unsigned integer to convert.
 * @len: A pointer to the count of characters printed.
 *
 * Return: The number of characters printed.
 */
int dtob(unsigned long int n, int len)
{
	unsigned long int binary[100] = {0};
	int i = 0;

	if (n == INT_MAX)
	{
		int max_digits[32];
    		for (i = 0; i < 32; i++)
    		{
        		max_digits[i] = 1;
    		}
		for (i = 31; i >= 0; i--)
    		{
        		print_char(max_digits[i] + '0');
    		}
    		len += 32;
	}

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
