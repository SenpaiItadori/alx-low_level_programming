#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: the size of the array
 * @c: the xhar that initializes the array
 *
 * Return: a pointer to the array or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *created_array;

	if (size == 0)
		return (NULL);

	created_array = malloc(sizeof(char) * size);
	if (created_array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		created_array[i] = c;
	}
	created_array[size] = '\0';

	return (created_array);
}
