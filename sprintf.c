#include "main.h"
#include <stdlib.h>
/**
 * _sprintf - prints hexa.
 * @str: string.
 * Return: no return.
*/
void _sprintf(char *str)
{
int i;
if (str == NULL && *str != '\0')
{
return;
}
for (i = 0; str[i] != '\0'; i++)
{
unsigned int num;
if (str[i] >= 32 && str[i] <= 126)
{
_putchar(str[i]);
}
else
{
_putchar('\\');
_putchar('x');
num = (unsigned int)str[i];
hexadecimal(num);
}
}
}
