#include "main.h"

/**
* _strpbrk - locates first occurrence in string s
* @s: source
* @accept: target
* Return: pointer to index of s
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0, n;

while (s[i] != '\0')
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
{
s = &s[i];
return (s);
}
}
i++;
}
return (0);
}
