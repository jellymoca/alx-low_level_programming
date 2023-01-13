#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: no. of bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
unsigned int *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
else
{
return (ptr);
}
}
