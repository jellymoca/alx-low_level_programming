#include "main.h"

/**
* _strlen - return length of string
* @str: string
* Return: length string
*/
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}

/**
* check_pal - check if string is a palindrome
* @i: last index
* @j: first index
* @c: result
* Return: 1 if palindrome
*/
int check_pal(int j, int i, char *c)
{
if (j >= i)
return (1);
else if (c[j] != c[i])
return (0);
else
return (check_pal(j + 1, i - 1, c));
}

/**
* is_palindrome - check if string is a palindrome
* @s: string
* Return: 1 if palindrome
*/
int is_palindrome(char *s)
{
int i;

i = _strlen(s) - 1;
return (check_pal(0, i, s));
}
