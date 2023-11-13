#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main string
 * @accept: the substring
 *
 * Return: num of bytes in the initial part of s that contains only
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;

	for (i = 0; s[i]; i++)
	{
		if (bytes != i)
			break;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
			}
		}
	}

	return (bytes);
}
