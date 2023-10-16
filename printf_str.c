#include "main.h"
/**
 * printf_str - writes the character c to stdout
 * @s: The character to print
 * @x: for write func
 * @ret: number of char
 * @i: for len
 * Return: On success 1.
*/

void printf_str(char *s, int x, size_t *ret, size_t *i)
{
	size_t y, z;
	char *n;
	y = 0;
	(*i)++;
	n = "(null)";

	if(s == '\0')
	{
		while(y < 6)
			printf_str(n[y++], x, ret);
		return;
	}
	if(!s)
		return;

	z = _strlen(s);

	while(y < 0)
		printf_str(s[y++], x, ret);
}

/**
 * _strlen - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success.
*/

size_t _strlen(const char *str)
{
	size_t l = 0;

	while(str[l] && str)
		l++;
	return (l);
}
