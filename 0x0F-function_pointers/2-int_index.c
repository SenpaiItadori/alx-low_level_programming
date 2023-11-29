#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of ints
 * @size: the size of the array
 * @cmp: a pointer to a function that compares values
 * 
 * Return: -1 if no matches are found else, index number of the int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, returns;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		returns = cmp(array[i]);
		if (returns != 0)
			return (i);
	}

	return (-1);
}
