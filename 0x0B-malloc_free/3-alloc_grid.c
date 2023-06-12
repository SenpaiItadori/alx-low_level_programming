#include "main.h"

/**
 * alloc_gring - returns a pointer to a 2d array of ints
 * @width: columns of the array
 * @height: rows of the array
 * Return: a pointer to a 2d array or NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int **Td_ints;
	int i, j, k, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	Td_ints = malloc(sizeof(int *) * height);

	if (Td_ints == NULL)
	{
		free(Td_ints);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		Td_ints = malloc(sizeof(int) * width);

		if (Td_ints[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(Td_ints[j]);
			}
			free(Td_ints);
			return(NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (y = 0; y < width; y++)
		{
			Td_ints[k][y] = 0;
		}
	}

	return (Td_ints);
}
