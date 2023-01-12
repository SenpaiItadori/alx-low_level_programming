#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 string s1 and s2
 * @s1; string 1
 * @s2: the string with the concatenable data type
 * @n: the first n bytes of s2 to be concatenated
 * Return: a pointer to the allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *yes;
	unsigned int j, i, k;

	j = strlen(s2) + 1;
	k = strlen(s1) + 1;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	yes = malloc((sizeof(s1)) + n);
	if (n < j)
	{
		for (i = 0; i < k; i++)
		{
			yes[i] = s1[i];
		}
		for (i = 0; i <= n; i++)
		{
			yes[i + n] = s2[i];
		}
		yes = strcat(yes, "\0");
	}
	else
		yes = strcat(s1, s2);
	if (yes == NULL)
		return (NULL);
	return (yes);
}
