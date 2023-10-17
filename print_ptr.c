#include "main.h"

/**
 
print_ptr - prints an hexdecimal
@args: args.
Return: counter.
*/

int print_ptr(va_list args)
{
    void p;
    chars = "(nil)";
    long int x;
    int y, i;

    p = va_arg(args, void*);
    if (p == NULL)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            _putchar(s[i]);
        }
        return (i);
    }

    x = (unsigned long int)p;
    _putchar('0');
    _putchar('x');
    y = print_hexptr(x);
    return (y + 2);
} 

