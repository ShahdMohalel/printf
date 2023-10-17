#include "main.h"
#include <stdlib.h>
/**
 * _sprintf - Prints a hexa.
 * @str: string.
 * Return: no return.
 */
void _sprintf(char *str)
{
if (str == NULL)
{
return;
}
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 32 && str[i] <= 126)
{
_putchar(str[i]);
}
else
{
_putchar('\\');
_putchar('x');
hexadecimal((unsigned int)str[i]);
}
}
}
