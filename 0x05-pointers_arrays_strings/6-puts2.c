#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int lensize, i;

	lensize = 0;

	while (str[lensize] != '\0')
	{
		lensize++;
	}

	for (i = 0; i < lensize; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
