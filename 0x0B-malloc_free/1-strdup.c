#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated spacein mem
 * @str: the pointer
 * Return: *str
 */

char *_strdup(char *str)
{
	char *yes;
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
		yes = malloc(sizeof(char) * (j + 1));
	}

	if (yes == NULL)
	{
		return (NULL);
	}
	while ((yes[i] = str[i]) != '\0')
	{
		i++;
	}

	return (yes);
}
