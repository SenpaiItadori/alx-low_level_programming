#include "main.h"

/**
 * argstostr - concats all the args of the program
 * @ac: the argument count
 * @av: an array of command line args
 * Return: a pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *newstring;
	int i, j, totalstringlen;

	totalstringlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		totalstringlen += strlen(av[i] + 2);
	}

	newstring = malloc(totalstringlen);
	if (newstring == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		strcat(newstring, av[j]);
		strcat(newstring, "\n");
	}

	return (newstring);
}
