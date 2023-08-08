#include "main.h"

/**
 * alloc_grid - creates a 2d array of intergers
 * @height: the height of the grid
 * @width: the width of the grid
 * Return: a pointer to the 2d array of inteergers or NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i, j, k = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
		free(matrix);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			matrix[j][k] = 0;
		}
	}

	return (matrix);
}
