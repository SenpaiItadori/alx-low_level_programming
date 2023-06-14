#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string to be split into a bunch of words
 * Return: a pointer to an array of strings or NULL on failure
 */

char **strtow(char *str)
{

	char **array_of_strings, *token;
	int k = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	array_of_strings = malloc(strlen(str));
	token = strtok(str, " ");

	while(token != NULL)
	{
		array_of_strings[k] = malloc(strlen(token));
		array_of_strings[k] = token;
		token = strtok(NULL, " ");
		k++;
	}

	return (array_of_strings);
}
