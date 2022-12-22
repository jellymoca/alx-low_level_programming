#include "main.h"
/**
*_strncat - concatenate strings
* @dest: first string
* @src: second string
* @n: size of string
* Return: 0 dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;

while (dest[i] != '\0')
{
i++;
}

i = n;

for (j = 0; src[n] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
