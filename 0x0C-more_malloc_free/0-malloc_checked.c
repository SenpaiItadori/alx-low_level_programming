#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size i guess
 * Return: a pointer to the allocated memory when success
 */

void *malloc_checked(unsigned int b)
{
	char *yes = malloc(b);

	if (yes == NULL || !(yes))
	{
		exit(98);
	}
	return (0);
}
