#include "main.h"
/**
 * print_binary - Prints a binary
 * @args: string.
 * Return: len.
 */
int print_binary(va_list args)
{
unsigned int n;
int i, len;
char *str;
char *rev_str;
n = va_arg(args, unsigned int);
if (n == 0)
return (_putchar('0'));
if (n < 1)
return (-1);
len = base(n, 2);
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (-1);
for (i = 0; n > 0; i++)
{
if (n % 2 == 0)
str[i] = '0';
else
{
str[i] = '1';
n = n / 2;
}
str[i] = '\0';
rev_str = rev_string(str);
if (rev_str == NULL)
return (-1);
write_base(rev_str);
free(str);
free(rev_str);
}
return (len);
}
