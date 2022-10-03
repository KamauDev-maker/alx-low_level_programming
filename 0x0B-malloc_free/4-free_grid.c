#include "main.h"
#include <stdio.h>
#include  <stdlib.h>
/**
*free_grid - frees 2D grid
*@grid: the address of the 2D grid
*@height: height og the grid
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
