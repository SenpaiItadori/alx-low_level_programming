#include "main.h"

/**
 * _strdup - copies or duplicates a string given as a parameter
 * @str: the string given\
 *
 * Return: a pointer to the newly allocated space in mem
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	copy = malloc(sizeof(char) * j);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		copy[i] = str[i];
	}
	copy[j] = '\0';

	return (copy);
}
