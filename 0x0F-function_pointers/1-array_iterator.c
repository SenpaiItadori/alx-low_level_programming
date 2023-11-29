#include "function_pointers.h"

/**
 * array_iterator - exercutes a function given as a parameter on each element of an array
 * @size: the size of the array
 * @action: a pointer to the function to exercute on every element
 *
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
