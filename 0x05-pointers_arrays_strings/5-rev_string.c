#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tempo;
	int i, lensize, elements;

	lensize = 0;
	elements = 0;

	while (s[lensize] != '\0')
	{
		lensize++;
	}

	elements = lensize - 1;

	for (i = 0; i < lensize / 2; i++)
	{
		tempo = s[i];
		s[i] = s[elements];
		s[elements--] = tempo;
	}
}
