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
    if (n == 0)
    {
        print_char('0');
        len++;
        return len;
    }

    char binary[100];
    int i = 0;

    while (n > 0)
    {
        binary[i] = (n % 2) + '0';
        n /= 2;
        i++;
        len++;
    }

    binary[i] = '\0';

    int middle = i / 2;
    for (int x = 0; x < middle; x++)
    {
        char temp = binary[x];
        binary[x] = binary[i - x - 1];
        binary[i - x - 1] = temp;
    }

    for (int x = 0; x < i; x++)
    {
        print_char(binary[x] + '0');
    }

    return len;
}
