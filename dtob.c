#include <stdio.h>
#include "main.h"
/**
 * dtob - Convert an unsigned integer to binary and count characters.
 * @n: The unsigned integer to convert.
 * @len: A pointer to the count of characters printed.
 *
 * Return: The number of characters printed.
 */
int dtob(unsigned long int n, int len)
{
    if (n == 0)
    {
        print_char('0');
        len++;
        return len;
    }

    int binary[64];  // Use a larger array to accommodate long values
    int i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    while (i > 0)
    {
        i--;
        print_char('0' + binary[i]);
        len++;
    }

    return len;
}
