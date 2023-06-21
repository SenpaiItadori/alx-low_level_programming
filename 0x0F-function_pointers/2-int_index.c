#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array containing elements to be reseached on
 * @size: the size of the array
 * @cmp: pointer to the fuction to be used to compare vals
 * Return: -1 if failed, or other
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
