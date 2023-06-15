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
	char *s3, *s4 = "\0";
	unsigned int size, j, i = 0, k;

	size = sizeof(s1) + n  + 1;
	j = strlen(s2) + 1;

	s3 = malloc(size);
	if (s3 == NULL)
		return (NULL);

	if (s1 == NULL)
	{
		if (n < strlen(s2))
		{
			while (s2[i] && i <= n)
			{
				s3[i] = s2[i];
				i++;
			}
			s3[i + 1] = s4[0];
			return (s3);
		}
		else
		{
			free(s3);
			s3 = malloc(sizeof(s2) + 1);
			while (s2[i])
			{
				s3[i] = s2[i];
				i++;
			}
			return (s3);
		}
	}

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	if (s2 == NULL)
		return (s3);

	if (n < strlen(s2))
	{
		for (k = i; k < (i + n); k++)
		{
			s3[k] = s2[k - i];
		}
	}
	else
	{
		for (k = i; k < (i + j); k++)
		{
			s3[k] = s2[k - i];
		}
	}
	return (s3);

}
