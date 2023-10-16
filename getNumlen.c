#include "main.h"

/**
 * getNumberLength - Count digits in an integer
 * @myNum: The integer to be counted
 *
 * Return: The number of digits
 */

int getNumberLength(int myNum)
{
	int num_len = 0;

	if (myNum == 0)
	{
		return (1);
	}

	while (myNum != 0)
	{
		num_len++;
		myNum /= 10;
	}

	return (num_len);
}
