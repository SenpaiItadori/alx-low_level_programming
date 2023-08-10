#include "main.h"

/**
 * string_nconcat - concats 2 strings
 * @s1: the 1st string
 * @s2: the other string
 * @n: the amount of chars to be concated
 * Return: the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, x = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		x = i + k;
	else
		x = i + n;

	s3 = malloc(sizeof(char) * (x + 1));
	if (s3 == NULL)
		return (NULL);

	k = 0;
	while (j < x)
	{
		if (j <= i)
			s3[j] = s1[j];
		if (j >= i)
		{
			s3[j] = s2[k];
			k++;
		}
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
