#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: the first string
 * @s2: the string to be added to s1
 * @n: number of chars to be concated to s1 from s2
 * Return: a pointer to a newly allocated space in mem
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int size, j = 0, i = 0;

	while (s1[j])
		j++;
	while (s2[i])
		i++;
	if (i == 0)
	{
		s3 = malloc(j);
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
		return (s3);
	}
	if (i > n)
	{
		size = j + n;
		s3 = malloc(size);
		if (s3 == NULL)
			return (NULL);

		for (j = 0; s1[j]; j++)
			s3[j] = s1[j];
		for (i = 0; i < n; i++)
			s3[j + i] = s2[i];
		s3[j + i + 1] = '\0';
	}
	else
	{
		size = j + i;
		s3 = malloc(size);
		if(s3 == NULL)
			return (NULL);

		for (j = 0; s1[j]; j++)
			s3[j] = s1[j];
		for (i = 0; s2[i]; i++)
			s3[j + i] = s2[i];
	}

	return (s3);
}
