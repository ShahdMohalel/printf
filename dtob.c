#include "main.h"

/**
 * check_number - Print the digits of an integer and handle special cases
 * @n: The integer needs to be checked and printed
 *
 * Return: Nothing
 */
int dtob(unsigned int n, int len)
{

    if (n == 0)
    {
        _putchar('0');
        return (len + 1);
    }

    int binary = n % 2;
    len = dtob(n / 2, len);
    _putchar(binary + '0');

    return (len + 1);
}
