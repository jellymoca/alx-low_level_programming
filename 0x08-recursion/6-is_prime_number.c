#include "main.h"

/**
* optimus - recursively divide
* @n: number
* @i: divisor
* Return: 1 if prime
*/

int optimus(int n, int i)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
return (optimus(n, i + 1));

}

/**
* is_prime_number - check if prime
* @n: number
* Return: 1 if prime
*/

int is_prime_number(int n)
{
int i = 3;

if (n % 2 == 0 || n < 2)
return (0);
if (n == 2)
return (1);

return (optimus(n, i));
}
