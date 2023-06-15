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
	int i = 0;
	unsigned int size, j;

	size = (strlen(s1) + 1) + n + 1;

	s3 = malloc(size);
	if (s3 == NULL)
		return (NULL);

	if (s1 == NULL)
		return (s2);

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	if (s2 == NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (s4);

	for (j = 0; j <= n; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[i + 1] = s4[0];
	return (s3);
}
