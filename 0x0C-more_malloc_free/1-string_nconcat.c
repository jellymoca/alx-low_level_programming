#include "main.h"

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
int lenS1 = _strlen(s1);
int lenS2 = _strlen(s2)
char *s;
int size, i, j;

if (n == lenS2)
{
size = lenS1 + n;
}
else
{
size = lenS1 + (lenS2 - n);
}

s = malloc(sizeof(char) * size);

for (i = 0; i < lenS1; i++)
{
s[i] = s1[i];
}

for (j = 0; j < (size - lenS1); j++)
{
s[lenS1 + j] = s2[j];
}
s[size - 1] = '\0';
return (s);
}
