#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the string length of the string of arrays in av
 * @av: the string of arrays of program arguments
 * Return: teh concatenated strings when success
 */

char *argstostr(int ac, char **av)
{
	int i, j, m, n;
	char *yes;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}
	yes = malloc(sizeof(char) * (n + 1));

		if (yes == NULL)
			return (NULL);
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0 ; av[i][j] != '\0'; j++)
		{
			yes[m] = av[i][j];
			m++;
		}
		yes[m] = '\n';
		m++;
	}
	return (yes);
}
