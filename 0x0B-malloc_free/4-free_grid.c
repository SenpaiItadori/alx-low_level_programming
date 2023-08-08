#include "main.h"

/**
 * free_grid - frees a 2d grind prev created
 * @grid: the grid
 * @height: the columns of the 2d array
 * Return: None
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
