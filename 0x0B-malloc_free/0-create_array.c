#include "main.h"

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: the size of the array
 * @c: the  char to occupy the memory
 *
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size);

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	arr[size] = '\0';
	return (arr);
}
