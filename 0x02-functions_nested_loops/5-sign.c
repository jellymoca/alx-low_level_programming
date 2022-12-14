#include "main.h"
/**
* print_sign - will print the sign of numbers <0|0>
* @a : number to check
* Return: alway returns 0 or 1
*/
int print_sign(int a)
{
if (a > 0)
{
_putchar('+');
return (1);
}
if (a == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
