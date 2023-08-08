#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to string containg the contents of both strings or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, k = 0, size, n = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[j])
		j++;
	while (s2[k])
	{
		k++;
	}

	size = j + k;
	s3 = malloc(sizeof(char) * (size + 1));
	if (s3 == NULL)
		return (NULL);

	while (i < size)
	{
		if (i < j)
		{
			s3[i] = s1[i];
		}
		else
		{
			s3[i] = s2[n];
			n++;
		}
		i++;
	}
	s3[size] = '\0';

	return (s3);
}
