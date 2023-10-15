#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
int _printf(const char *format, ...)
{
int i;
int j;
int len = 0;
va_list ptr;
if (format == NULL)
{
return (0);
}
va_start(ptr, format);
for (i = 0; format[i] != '\0'; i++)
{
char *s;
if (format[i] == '%')
{
if (format[i + 1] == 'c')
{
_putchar(va_arg(ptr, int));
len++;
} 
else if (format[i + 1] == 's')
{
s = va_arg(ptr, char *);
if(s != NULL)
{
for (j = 0; s[j] != '\0'; j++)
{
_putchar(s[j]);
len++;
}
}
} 
else if (format[i + 1] == '%')
{
_putchar('%');
len++;
}
if (format[i] == '%' && (format[i + 1] == 'c' || format[i + 1] == 's'))
{
i++;
continue;
}
}
putchar(format[i]);
}
va_end(ptr);
return (len);
}
