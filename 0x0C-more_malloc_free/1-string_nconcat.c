#include "main.h"
#include <stdlib.h>

/**
* _strlen - returns the length of a string
* @s: string
* Return: range
*/

int _strlen(char *s)
{
int range = 0;

while (*s != '\0')
{
range++;
s++;
}
return (range);
}

/**
* string_nconcat - concatenates strings using malloc
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 to concat
* Return: pointer to final string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size, lenS1, lenS2;
char *s;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
lenS1 = _strlen(s1);
lenS2 = _strlen(s2);
if (n > lenS2)
{
n = lenS2;
}
size = lenS1 + n;
s = malloc(sizeof(char) * size + 1);
if (!s)
{
return (NULL);
}
for (i = 0; i < lenS1; i++)
{
s[i] = s1[i];
}
for (j = 0; j < n; j++, i++)
{
s[i] = s2[j];
}
s[i] = '\0';
return (s);
}
