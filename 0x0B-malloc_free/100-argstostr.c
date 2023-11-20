#include "main.h"

/**
 * argstostr - concatenates all command line arguments
 * @ac: the number of command line aguments
 * @av: an array containing all command line arguments
 *
 * Return: a pointer to the new string with all the arguments in it
 */

char *argstostr(int ac, char **av)
{
	int i, num, size = 0, k, j;
	char *arr, *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		num = 0;
		while (av[num])
		{
			num++;
		}
		size += num;
	}
	size += ac;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str = av[i];
		for (j = 0; j < size; j++)
		{
			for (k = 0; str[k] != '\0'; k++)
			{
				arr[j] = str[k];
				j++;
			}
			arr[j] = '\n';
		}
	}
	arr[size] = '\0';
	return (arr);
}
