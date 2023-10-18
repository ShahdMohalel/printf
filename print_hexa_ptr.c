#include "main.h"

/**
 * print_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */

int print_hexptr(unsigned long int n)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
