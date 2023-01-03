#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sum of diagonals in matrix
* @a: source
* @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int j, i;

for (j = 0; j < size; j++)
{
i = (j * size) + j;
sum1 += a[i];
}

for (j = 1; j <= size; j++)
{
i = (j * size) - j;
sum2 += a[i];
}
printf("%d, %d\n", sum1, sum2);
}
