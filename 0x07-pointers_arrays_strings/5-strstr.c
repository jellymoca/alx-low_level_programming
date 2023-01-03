#include "main.h"

/**
* _strstr - locate and return pointer to first occurence of substring
* @haystack: string to search
* @needle: target substring to search for
* Return: pointer to index of string at first occurence of whole substring
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0, j, n;

if (needle[0] == '\0')
{
return (haystack);
}
while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
n = i, j = 0;
while (needle[j] != '\0')
{
if (haystack[n] == needle[j])
{
n++, j++;
}
else
break;
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
i++;
}
return (0);
}
