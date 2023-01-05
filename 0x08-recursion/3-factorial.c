#include "main.h"

/**
* factorial - find factorial of n
* @n: number to factor
* Return: 0*
*/

int factorial(int n)
{
if (n < 0)
{
return (0 - 1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
