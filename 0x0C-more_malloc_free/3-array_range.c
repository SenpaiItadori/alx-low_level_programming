#include "main.h"

/**
 * array_range - creates an arranged array of integers
 * @min: the interger with the least value
 * @max: the interger with the most value
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array_of_ints, j, i, k = min;

	if (min > max)
		return (NULL);

	j = (max - min) + 2;

	array_of_ints = malloc(j * (sizeof(int)));
	if (array_of_ints == NULL)
		return (NULL);

	for (i = 0; i < j; i++, k++)
	{
		array_of_ints[i] = k;
	}

	return (array_of_ints);
}
