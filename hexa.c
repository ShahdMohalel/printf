#include "main.h"
/**
 * hexadecimal - convert to hexa.
 * @num: take a number.
 * return: no return.
 */
void hexadecimal(unsigned int num)
{
int remain, result;
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
putchar('A');
break;
case 11:
putchar('B');
break;
case 12:
putchar('C');
break;
case 13:
putchar('D');
break;
case 14:
putchar('E');
break;
case 15:
putchar('F');
break;
default:
putchar('0' + remain);
}
}
