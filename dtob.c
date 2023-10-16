#include "main.h"

/**
 * check_number - Print the digits of an integer and handle special cases
 * @n: The integer needs to be checked and printed
 *
 * Return: Nothing
 */
int dtob(unsigned int n, int len)
{
    if (n < 1)
        return (-1);

    len = dtob(n / 2, len);
    int rem = n % 2;
    print_char(rem + '0');
    len++;
    return len;
}
