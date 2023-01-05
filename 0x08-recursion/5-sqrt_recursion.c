#include "main.h"

/**
* sqroot - find square root of n
* @n: number
* Return: natural square root or -1
*/

int sqroot(int n, int root)
{
if (root * root > n)
{
return (-1);
}

if (root * root == n)
{
return (root);
}
return (sqroot(n, root + 1));
}

/**
* _sqrt_recursion - find square root of n
* @n: number
* Return: natural square root, or -1
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqroot(n, 0));
}
