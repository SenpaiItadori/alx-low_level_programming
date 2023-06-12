#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: the size of the array
 * @c: the specific char
 * Return: a pointer to the array on success, else - NULL
 */

char *create_array(unsigned int size , char c)
{
	char *arrayofchars;
	unsigned int iteration;

	if (size <= 0)
	{
		return (NULL);
	}

	arrayofchars = malloc(size);

	if (arrayofchars == NULL)
	{
		return (NULL);
	}

	for (iteration = 0; iteration < size; iteration++)
	{
		arrayofchars[iteration] = c;
	}

	return (arrayofchars);
}
