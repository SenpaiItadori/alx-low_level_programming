#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - exercutes a function given asa perameter on eaxh elem of array
 * @array: the array
 * @size: the size of an array
 * @action: the function pointer that exercutes
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
