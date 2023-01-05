#include "main.h"
#include <stdio.h>


void _puts_recursion(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(s[j]);
	}
	_putchar ('\n');
}
