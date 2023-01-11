#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid from previous allo_grid
 * @grid: the double pointed grid to be free
 * @height: the number of rows of the matrix
 * Return: n/a
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
