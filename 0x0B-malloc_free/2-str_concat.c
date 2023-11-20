#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the other string
 *
 * Return: a pointer to a string containing s1 followed by s2
 * or NULl if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int size = 0, sizes1 = 0, sizes2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[sizes1])
		sizes1++;

	while (s2[sizes2])
		sizes2++;

	size = sizes1 + sizes2;

	s3 = malloc(size);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (i < sizes1)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - sizes1];
	}

	s3[size] = '\0';
	return (s3);
}
