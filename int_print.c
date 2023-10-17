#include "main.h"
/**
 * _print_int - int.
 * @num: number.
 * Return: len.
 */
int _print_int(long int num)
{
    int len = 0;
    if(num == 0)
    {
        return (0);
    }
    len += _print_int(num / 10);
    len++;
    putchar('0' + num % 10);
    return (len);
}
