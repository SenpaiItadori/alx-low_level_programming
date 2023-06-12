#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: the string to be added to
 * @s2: the added
 * Return: a pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int iteration = 0, sizeofs3, s1_len;

	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s1 != NULL && s2 == NULL)
		return (s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1_len = strlen(s1);
	sizeofs3 = s1_len + strlen(s2);
	s3 = malloc(sizeofs3);
	if (s3 == NULL)
		return (NULL);

	while (s1[iteration])
	{
		s3[iteration] = s1[iteration];
		iteration++;
	}
	for (iteration = s1_len; iteration < sizeofs3; iteration++)
	{
		s3[iteration] = s2[iteration - s1_len];
	}
	return (s3);
}
