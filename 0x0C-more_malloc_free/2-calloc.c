#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements
* @size: number of bytes
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int cnt, i;
char *s, *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
cnt = nmemb * size;
s = ptr = malloc(cnt);

if (s == NULL || ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < cnt; i++)
{
*s++ = 0;
}
return (ptr);
}
return (0);
}
