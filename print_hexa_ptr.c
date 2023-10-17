#include "main.h"
/**
print_hexptr - prints
@n: args
Return: len
*/
int print_hexptr(unsigned long int n)
{
	unsigned int *array;
    int counter = 0, i;
    unsigned long int temp = n;

    if (n == 0) {
        _putchar('0');
        return 1;
    }

    while (temp > 0) {
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
    }

    free(array);
    return counter;
}
