#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of members in the array
 * @size: the size of a single array member
 * Return: a pointer to the newly allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, j = 0;
	char *memo;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	memo = malloc(j);
	if (memo == NULL)
		return (NULL);
	while (i < j)
	{
		memo[i] = 0;
		i++;
	}

	return (memo);
}
