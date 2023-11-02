#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees previous 2 dimensional grid
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
