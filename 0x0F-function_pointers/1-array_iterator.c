#include "function_pointers.h"

/**
 * array_iterator - exercutes a function on each element of an array
 * @array: an array of ints
 * @size: the size of the array
 * @action: a pointer to the function to exercute on every element
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
