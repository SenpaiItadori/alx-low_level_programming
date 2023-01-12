#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: the minimum
 * @max: the max literally
 * Return: the string
 */

int *array_range(int min, int max)
{
	int *yes = malloc(sizeof(*yes) * ((max - min) + 1));
	int i;

	if (min > max)
		return (NULL);

	if (yes == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		yes[i] = min;
	return (yes);
}
