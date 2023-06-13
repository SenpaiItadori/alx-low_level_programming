#include "main.h"

/**
 * alloc_gring - returns a pointer to a 2d array of ints
 * @width: columns of the array
 * @height: rows of the array
 * Return: a pointer to a 2d array or NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int i , j, **matrix;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int*) * height);
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int*)malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
