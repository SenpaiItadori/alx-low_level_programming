#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the main string to be searched upon
 * @accept: the substring containing the set of bytes
 *
 * Return: a pointer to byte in s that matches one of the chars in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int  i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
