#include "main.h"

/**
 * _memcpy - copy block of memory
 * @dest: destination
 * @src: source
 * @n: byte size
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
