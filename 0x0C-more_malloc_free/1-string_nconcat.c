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

	size = sizeof(s1) + n  + 1;
	j = strlen(s2) + 1;

	if (s1 == NULL && s2 == NULL)
		return (s4);

	else if (s2 == NULL)
	{
		s3 = malloc(sizeof(s1) + 1);
		for (i = 0; s1[i]; i++)
			s3[i] = s1[i];
		return (s3);
	}
	else if (s1 == NULL)
	{
		if (n < sizeof(s2))
		{
			s3 = malloc(n + 1);
			for (i = 0; i < n; i++)
				s3[i] = s2[i];
			s3[i + 1] = '\0';
			return (s3);
		}
		else
		{
			s3 = malloc(j);
			for (i = 0; s2[i]; i++)
				s3[i] = s2[i];
			return (s3);
		}
	}
	else
	{
		if (n >= j)
		{
			s3 = malloc(sizeof(s1) + j);
			for (i = 0; s1[i]; i++)
				s3[i] = s1[i];
			for (k = i; s2[k - i]; k++)
				s3[k] = s2[k - i];
			return (s3);
		}
		else
		{
			s3 = malloc(size);
			for (i = 0; s1[i]; i++)
				s3[i] = s1[i];
			for (k = i; (k - i) < n;  k++)
				s3[k] = s2[k - i];
			s3[k + 1] = '\0';
			return (s3);
		}
	}
}
