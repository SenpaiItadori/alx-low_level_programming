#include "main.h"

/**
 * malloc_checked - allocates memory usigng malloc
 * @b: the size fo the allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	if (!point)
	{
		exit(98);
	}

	return (point);
}
