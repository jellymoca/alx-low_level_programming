#include <stdio.h>
#include <stdio.h>
/**
* main - prints the sum of all the multiples of 3 or 5 below 1024
* To compute and prints
* Return: alway returns 0
*/
int main(void)
{
int c = 0;
int sum = 0;

while (c < 1024)
{
if (c % 3 == 0 || c % 5 == 0)
{
sum += c;
}
c++;
}
printf("%i\n", sum);
return (0);
}
