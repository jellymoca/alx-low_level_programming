#include "main.h"
/**
*_strcat - concatenate strings
* @dest: first string
* @src: second string
* Return: 0 dest
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
*dest[i] = *src[j];
j++;
i++;
}
return (dest);
}
