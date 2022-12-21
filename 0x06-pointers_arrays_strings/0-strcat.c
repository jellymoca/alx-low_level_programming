#include "main.h"
/**
*_strcat - concatenate strings
* @dest: first string
* @src: second string
* Return: 0 dest
*/

char *_strncat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{	
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
    
