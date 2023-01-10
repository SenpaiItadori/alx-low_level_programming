#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings s1 and s2 to make s3
 * @s1: string 1
 * @s2: string 2
 * Return: s3
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int j,i,m,n;

	i = 0;
	m = 0;
	n = 0;
	 while (s1[m])
		 m++;
	 while (s2[n])
		 n++;
	 s3 = malloc(sizeof(char) * (m + n + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		for (j = 0; j < m; j++)
		{
			s3[j] = s1[j];
		}
	}
	if (s2)
	{
		for (j = 0; j < (m + n); i++, j++)
		{
			s3[j] = s2[i];
		}
	}
	s3[j] = '\0';
	return (s3);
}
