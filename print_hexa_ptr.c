#include "main.h"
/**
print_hexptr - prints
@n: args
Return: len
*/
int print_hexptr(unsigned long int n)
{
long int i, len = 0;
long int *x;
unsigned long int temp = n;
while (n / 16 != 0)
{
n /= 16;
len++;
}
len++;
x = malloc(len * sizeof(long int));
for (i = 0; i < len; i++)
    {
        x[i] = temp % 16;
        temp /= 16;
    }
    for (i = len - 1; i >= 0; i--)
    {
        if (x[i] > 9)
            x[i] = x[i] + 39;
        _putchar(x[i] + '0');
    }
    free(x);
    return (len);
}
