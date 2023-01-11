#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: the number of columns
 * @height: the number of rows of the dimensional array
 * Return: the double pointer or NULL if failed/width&& ||height = 0
 */

int **alloc_grid(int width, int height)
{
	int **yes, i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	yes = (int **) malloc(sizeof(int *) * height);
	if (yes == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		yes[i] = (int *) malloc(sizeof(int) * width);
		if (yes[i] == NULL)
		{
			free(yes);
			for (j = 0; j <= i; j++)
				free(yes[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			yes[i][j] = 0;
	}
	return (yes);
}
