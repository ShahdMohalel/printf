#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes a character to stdout
 *@c:charcter to print
 *Return:1 - on success, -1 on error
 *
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
