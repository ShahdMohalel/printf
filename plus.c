#include "main.h"
int plus(va_list args)
{
    int len = 0;
    int number;
    number = va_arg(args, int);
    if (number > 0)
    {
        putchar('+');
        len = _print_int(number);
        len++;
    }
    if (number < 0)
    {
        number = number / -1;
        putchar('-');
        len = _print_int(number);
        len++;
    }
    if (number == 0)
    {
        putchar('0');
        len = 1;
    }
    return (len);
}
