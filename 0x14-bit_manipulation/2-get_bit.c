#include "main.h"

/**
* get_bit - return value of bit at index in decimal number
* @n: number
* @index: index of bit
* Return: bitValue
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bitValue;

if (index > 63)
return (-1);

bitValue = (n >> index) & 1;

return (bitValue);
}
