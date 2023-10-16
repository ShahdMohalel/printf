#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @x: to print to stdout
 * @ret: num of char
 * @i: length
 * Return: On success
 */

void _putcharfd(char c, int x, size_t *ret)
{
	write(x, &c, 1);
	(*ret)++;
	return (*ret);
}
