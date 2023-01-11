#include "main.h"
#include <stdlib.h>

/**
* _strdup - copy a string to a new space in memory
* @str: string
* Return: pointer to duplicated string or NULL if error
*/

char *_strdup(char *str)
{
unsigned int i, j;
char *str2;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
;
i++;
str2 = malloc(i * sizeof(char));
if (str2 == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
str2[j] = str[j];
}
return (str2);
}
