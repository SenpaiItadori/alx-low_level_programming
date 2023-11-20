#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: a pointer to the new memory which contains a copy of str
 * 	or NULL if failed
 */

char *_strdup(char *str)
{
	char *arr;
	int size = 0, j;

	while (str[size])
	{
		size++;
	}

	arr = malloc(size);

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	for (j = 0; j <= size; j++)
	{
		arr[j] = str[j];
	}

	arr[size] = '\0';
	return (arr);
}
