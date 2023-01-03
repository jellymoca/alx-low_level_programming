#include "main.h"
/**
* _strspn - return length of substring
* @s: source
* @accept: target
* Return: count of char
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j, count;

count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (s[i] != accept[j])
{
return (count);
}
}
return (count);
}
