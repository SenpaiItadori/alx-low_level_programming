#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it a specific char
 * @size: the size of the array
 * @c: the specific char
 * Return: Null is size = 0, pointer to the array or Null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *yes = (char *) malloc(sizeof(char) * size);

	if (size == 0 || yes == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		yes[i] = c;
	return (yes);
}
