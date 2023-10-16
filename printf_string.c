#include "main.h"

/**
 * print_string - Prints a string
 * @text: the  string pointer
 *
 * Return: the size of the string
 */

int print_string(char *text)
{
	int sstrlen = 0;

	if (text == NULL)
	{
		sstrlen += write(1, "(null)", 6);
		return (sstrlen);

	}

	while (*(text + sstrlen))
	{
		write(1, text + sstrlen, 1);
		sstrlen++;
	}

	return (sstrlen);
}
