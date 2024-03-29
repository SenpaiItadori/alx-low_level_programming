#include "main.h"

/**
 * alloc_grid - creates a 2d array of integers
 * @width: the width of the 2d array
 * @height: the height of the 2d array
 *
 * Return: a pointer to the array or NULl if failed
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **grid;

	if (height < 1 || width < 1)
		return (NULL);

	grid = malloc(sizeof(int **) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i <  height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			grid[j][k] = 0;
		}
	}

	return (grid);
}
