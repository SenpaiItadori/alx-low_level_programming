#include "main.h"

/**
 * array_range - creatyes an array of ints in ascending order
 * @min: the min value
 * @max: the max value
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *made_array, i = 0;

	if (min > max)
		return (NULL);

	made_array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (made_array == NULL)
		return (NULL);

	while (min <= max)
	{
		made_array[i] = min;
		i++;
		min++;
	}

	return (made_array);
}
