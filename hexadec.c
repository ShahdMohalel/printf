#include "main.h"
/**
 * hexadec - check
 * @n: Number
 * @x: u or l
 * Return: Ascii
 */

int hexadec(int n, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	n -= 10;
	if (x == 'x')
		return (hex[n]);
	else
		return (Hex[n]);
	return (0);
}
