#include "main.h"
/**
 * space - Print space
 * @args: arguments
 * Return: len
 */
int space(va_list args)
{
    int len = 0;
    int num;
    num = va_arg(args, int);
    if (num < 0)
    {
        putchar('-');
        len++;
        num = num / -1;
        len += _print_int(num);
    }
    else
    {
        putchar(' ');
        len++;
        len += _print_int(num);
    }
    return (len);
}
