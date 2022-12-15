#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal.
 * @n: number of \ to print
 * Return: None
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		if (i >= 2)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
			continue;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
