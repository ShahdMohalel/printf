#include "main.h"
int plus(va_list args)
{
    int len = 0;
    int i;
    int number;
    number = va_args(args, int);
    if (number == NULL)
    {
        return (0);
    }
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
