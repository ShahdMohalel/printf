#include "main.h"

/**
 * base - Calculates the length
 * @n: The number
 * @base: Base to be calculated by
 * Return: length
 */

unsigned int base(unsigned int n, int base)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		n = n / base;
	}
	return (i);
}

/**
 * write_base - write base
 * @str: String to parse
 */

void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * rev_string - reverses a string 
 * @s: string to reverse
 * Return: pointer
 */

char *rev_string(char *s)
{
	int len = 0, x;
	char c;
	char *dest;

	while(s[len] != '\0')
		len++;

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (x = 0; x < len; x++, len--)
	{
		c = dest[len - 1];
		dest[len - 1] = dest[x];
		dest[x] = c;
	}
	return (dest);
}

/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: Source
 * @n: number of bytes copyed
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
