#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array of elements
 * @size: is the size of the array
 * @action: is a pointer to the functon to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
