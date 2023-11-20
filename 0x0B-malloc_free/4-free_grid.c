#include "main.h"

/**
 * free_grid - frees a 2d grid previously created alloc_grid
 * @grid: the 2d array to be freed
 * height: the height of the grid
 *
 * Return: void function
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
