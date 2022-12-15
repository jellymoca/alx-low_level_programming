#include "main.h"
/**
<<<<<<< HEAD
* print_numbers - prints the numbers from 0 to 9 followed by a new line
* @n: numbers to be printed
* Return: 0
*/

void print_numbers(void)
{
char n = 0;

while (n <= 9)
{
_putchar('0' + n);
n++;
}
=======
* print_numbers - prints the numbers, from 0 to 9, followed by a new line
* Return: 0
*/
void print_numbers(void)
{
int x;

for (x = 0, x < 10, x++)
_putchar(x + '0');
>>>>>>> 97f83497df774437740964d07688025c1dddb367
_putchar('\n');
}
