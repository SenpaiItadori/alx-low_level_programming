#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: the array from which our ints are found
 * @size: teh size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the non 0-return int,-1 if size <=0 & no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}
