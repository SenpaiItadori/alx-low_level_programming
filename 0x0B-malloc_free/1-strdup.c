#include "main.h"

/**
 * _strdup - copies a string given as a parameter to a new space in mem
 * @str: string to be duplicated
 * Return: a pointer to the newly allocated space in mem or NULL if Fail
 */

char *_strdup(char *str)
{
	char *duplicate;
	int iteration, sizeofstr = 0;

	if (str == NULL)
		return (NULL);

	while (str[sizeofstr])
	{
		sizeofstr++;
	}
	duplicate = malloc(sizeofstr + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (iteration = 0; iteration < sizeofstr + 1; iteration++)
	{
		duplicate[iteration] = str[iteration];
	}

	return (duplicate);
}
