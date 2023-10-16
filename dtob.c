#include "main.h"

/**
 * check_number - Print the digits of an integer and handle special cases
 * @n: The integer needs to be checked and printed
 *
 * Return: Nothing
 */
int dtob(unsigned int n)
{
    int l = 0;
    if (n > 1)
    {
        l += dtob(n / 2);
    }
    int rem = n % 2;
    print_char(rem + '0');
    l++;
    return l;
}
