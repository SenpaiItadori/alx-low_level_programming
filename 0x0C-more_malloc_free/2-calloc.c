#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: the number of elements of the array
 * @size: the size of each element
 *
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
