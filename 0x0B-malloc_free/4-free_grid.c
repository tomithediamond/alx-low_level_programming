#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2-D grid previously created by alloc_grid function.
 * @grid: the 2 dimensional grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int e;

	for (e = 0; e < height; e++)
	{
		free(grid[e]);
	}
	free(grid);
}
