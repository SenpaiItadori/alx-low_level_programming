#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of elements
 * @size: size of bytes each element occupies
 * Return: a pointer to the allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *yes = malloc(nmemb * size);
	unsigned int i, j;

	j = nmemb * size;
	if (j == 0 || yes == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		yes[i] = 0;
	return (yes);
}
