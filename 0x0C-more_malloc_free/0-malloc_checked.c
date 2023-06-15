#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory to be set
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *allocate;

	allocate = malloc(b);
	if (allocate == NULL)
	{
		exit(98);
	}

	return (allocate);
}
