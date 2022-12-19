#include "main.h"
/**
 * _print_rev - prints a stringin reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, j;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
