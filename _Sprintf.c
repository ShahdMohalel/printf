#include "main.h"
#include <stdlib.h>
/**
 * _sprintf - Prints a hexa.
 * @str: string.
 * Return: no return.
 */
int _sprintf(va_list args)
{
int i;
char *str;
int len = 0;
int hexlen = 0;
str = va_arg(args, char *);
if (str == NULL)
{
return (0);
}
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 32 && str[i] < 127)
{
_putchar(str[i]);
len++;
}
else
{
_putchar('\\');
len++;
_putchar('x');
len++;
hexlen = hexadecimal((unsigned int)str[i]);
}
}
len = len + hexlen;
return (len);
}
