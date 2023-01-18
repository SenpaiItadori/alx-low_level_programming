#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - checks to see if a num is equal to 98
 * @elem: the integer to check
 * Return: 0 if false , something else otherwise
 */

int is_98(int elem)
{
	return (98 == elem);
}

/**
 * is_strictly_positive - checks to see if nm is > 0
 * @elem: the integer to check
 * Return: 0 if false, something else otherwise
 */

int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - checks to see if the absolute value of elem is 98
 * @elem: the checked
 * Return: 0 if false , something else otherwise
 */

int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	int array[20] = {0, 402, -98, 98, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index =  int_index(array, 20, abs_is_98);
	printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);
	return (0);
}
