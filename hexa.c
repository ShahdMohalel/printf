#include "main.h"
/**
 * hexadecimal - hexa.
 * @num: number.
 * Return: no return.
 */
int hexadecimal(unsigned int num)
{
int len = 0;
int remain;
if (num == 0)
{
_putchar('0');
return (1);
}
remain = num % 16;
len += hexadecimal(num / 16);
switch (remain)
{
case 10:
_putchar('A');
len++;
break;
case 11:
_putchar('B');
len++;
break;
case 12:
_putchar('C');
len++;
break;
case 13:
_putchar('D');
len++;
break;
case 14:
_putchar('E');
len++;
break;
case 15:
_putchar('F');
len++;
break;
default:
_putchar('0' + remain);
len++;
}
return(len++);
}
