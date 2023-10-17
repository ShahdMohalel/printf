#include "main.h"
/**
 * rev - Prints rev
 * @args: string
 * Return: count;
 */
int rev(va_list args)
{
    int i;
    int count = 0;
    char *str;
    str = va_arg(args, char *);
    if (str == NULL)
    {
        return (0);
    }
    
    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (i = (count - 1); i >= 0; i--)
    {
        _putchar(str[i]);
        
    }
    return (count);
}
