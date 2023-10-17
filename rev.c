#include "main.h"
/**
 * rev - Prints rev
 * @args: string
 * Return: count;
 */
int rev(va_list args)
{
int i = 0, j;
char *s = va_arg(args, char *);
if (!s)
s = "(null)";
while (s[i])
i++;
for (j = i - 1; j >= 0; j--)
_putchar(s[j]);
return (i);
}
