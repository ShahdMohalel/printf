#include "main.h"
/**
print_hexptr - prints
@n: args
Return: len
*/
int print_hexptr(unsigned long int n)
{
<<<<<<< HEAD
	unsigned int *array;
    int counter = 0, i;
    unsigned long int temp = n;

    if (n == 0) {
        _putchar('0');
        return 1;
    }

    while (temp > 0) {
=======
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
<<<<<<< HEAD
>>>>>>> a163123c5156b81aa8e53b941ffaf5a6c6976055
        temp /= 16;
        counter++;
    }

    array = (unsigned int *)malloc(counter * sizeof(unsigned int));

    if (array == NULL) {
        return -1;
    }

    temp = n;
    for (i = counter - 1; i >= 0; i--) {
        array[i] = temp % 16;
        temp /= 16;
    }

    for (i = 0; i < counter; i++) {
        if (array[i] >= 10) {
            _putchar('A' + (array[i] - 10));
        } else {
            write(1, &array[i], 1);
        }
=======
temp /= 16;
}
for (i = len - 1; i >= 0; i--)
    {
        if (x[i] > 9)
            x[i] = x[i] + 39;
        _putchar(x[i] + '0');
>>>>>>> b0b701415ca441c3e735ce106bde2f9b882f80fc
    }

    free(array);
    return counter;
}
