#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees 2D grid created by alloc_grid function.
* @grid: grid
* @height: grid height
* Return: 0
*/

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
