#include "main.h"

/**
 * free_grid - frees a 2d grid in preevious question
 * @grid: a pointer to the grid
 * @height: the height of the pointed grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
