#include "main.h"

/**
* _memset - reset string
* @s: destination string
* @b: source
* @n: size
* Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
