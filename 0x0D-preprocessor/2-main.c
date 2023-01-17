#include<unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

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

/**
* main - print name of the file using macro
*
* Return: Always 0
*/

int main(void)
{
char *c;
int len, i;

c = __FILE__;
len = _strlen(c);
for (i = 0; i < len; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
