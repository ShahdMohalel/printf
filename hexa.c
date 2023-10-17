#include "main.h"
/**
 * hexadecimal - hexa.
 * @num: number.
 * Return: no return.
 */
void hexadecimal(unsigned int num)
{
int remain;
int result;
if (num == 0)
{
_putchar('0');
return;
}
remain = num % 16;
hexadecimal(num / 16);
switch (remain)
{
case 10:
_putchar('A');
break;
case 11:
_putchar('B');
break;
case 12:
_putchar('C');
break;
case 13:
_putchar('D');
break;
case 14:
_putchar('E');
break;
case 15:
_putchar('F');
break;
default:
_putchar('0' + remain);
}
}
