#include "function_pointers.h"

/**
 * array_iterator - executes a function given on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function that is to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
