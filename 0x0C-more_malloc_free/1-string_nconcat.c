#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the main string
 * @s2: the concatenator
 * @n: the first number of bytes to be concated from s2
 *
 * Return: a pointer to the new mem with s1 and bytes of s2
 * or NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		j = len1 + len2;
	else
		j = len1 + n;
	s3 = malloc(sizeof(char) * j + 1);
	if (s3 == NULL)
		return (NULL);

	while (i < j)
	{
		if (i <= j)
			s3[i] = s1[i];
		if (i >= j)
		{
			s3[i] = s2[k];
			k++;
		}
		i++;
	}
	s3[j] = '\0';
	return (s3);
}

/**
 * _strlen - returns the length of a string
 * @str: the string
 *
 * Return: the length of str
 *
 */

unsigned int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
