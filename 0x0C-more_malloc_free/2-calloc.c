#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	if (j == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		p[i] = 0;
	return (p);
}
