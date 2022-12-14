#include "main.h"
#include "6-abs.c"
/**
* print_last_digit - main function
* @m: integer to get last digit of
* Return: last digit of m
*/
int print_last_digit(int m)
{
 _putchar('0' + _abs(m % 10));
return (_abs(m % 10));
}
