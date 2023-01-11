#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - concatenate strings
* @s1: first
* @s2: second
* Return: pointer to new space in memory, or NULL if err
*/

char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k, l;
char *str3;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
;
}
k = i + j + 1;
str3 = malloc(k *sizeof(char));
if (str3 == NULL)
return (NULL);
for (l = 0; l < i; l++)
str3[l] = s1[l];
for (l = 0; l < j; l++)
str3[l + i] = s2[l];
str3[i + j] = '\0';
return (str3);
}
