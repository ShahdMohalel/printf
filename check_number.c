#include "main.h"

/**
 * check_number - Print the digits of an integer and handle special cases
 * @n: The integer needs to be checked and printed
 *
 * Return: Nothing
 */

void check_number(int n)
{
	int i;
	int digits[12];
	int length = 0;

	if (n == INT_MIN)
	{
		print_char('-');
		print_char('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		print_char('-');
		n = -n;
	}
	if (n == 0)
	{
		digits[length++] = 0;
	}
	else
	{
		while (n > 0)
		{
			digits[length++] = n % 10;
			n /= 10;
		}
	}
	for (i = length - 1; i >= 0; i--)
	{
		print_char(digits[i] + '0');
	}
}
