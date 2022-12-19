#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string value to be printed
 */

void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
