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
	char *s3, *s4 = "";
	unsigned int size, j, i = 0, k;

	if (s2 == NULL)
		return (s1);
	if (s1 == NULL)
		return (s2);
	if (s1 == NULL && s2 == NULL)
		return (s4);

	size = sizeof(s1) + n  + 1;
	j = strlen(s2) + 1;

	s3 = malloc(size);
	if (s3 == NULL)
		return (NULL);

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}

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
