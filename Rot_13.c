#include "main.h"
/**
 * print_rot13 - prints a string using rot13
 * @args: args
 * Return: length
 */

int print_rot13(va_list args)
{
    int i, x;
    char *str;
    char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    str = va_arg(args, char *);
    if (str == NULL)
        return (-1);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (x = 0; x < 52; x++)
        {
            if (str[i] == s[x])
            {
                _putchar(u[x]);
                break;
            }
        }
        if (x == 52)
            _putchar(str[i]);
    }
    return (i);
}

