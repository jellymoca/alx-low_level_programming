#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be passed
 * Return: range
 */

int _strlen(char *s)
{
	int range = 0;

	while (*s != '\0')
	{
		range++;
		s++;
	}
	return (range);
}
