#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: one string
 * @s2: another string
 *
 * Return: 0 if the strings are equal
 * num if the first non matching char of s1 is greater than s2s
 * -num if the first non matching char of s1 is lower than s2s
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k;

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (s1 == NULL && s2 == NULL)
		return (0);

	for (k = 0; k <= i; k++)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
	}
	return (0);
}
