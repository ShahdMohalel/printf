#include <stdio.h>
#include "main.h"
/**
 * dtob - Convert an unsigned integer to binary and count characters.
 * @n: The unsigned integer to convert.
 * @len: A pointer to the count of characters printed.
 *
 * Return: The number of characters printed.
 */
int dtob(unsigned int n, int len)
{
    int binary[100] = {0};
    int i = 0;
    if( n < 0)
	    return(-1);

    if (n == 0)
    {
        binary[i] = 0;
        i++;
    }

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
