#include "main.h"

/**
 * _strncpy - copies a n bytes of a string
 * @dest: the string to store the copy
 * @src: the string to be copied
 * @n: the number of bytes to be copied
 *
 * Return: returns the copy of the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (src[len])
	{
		len++;
	}

	len++;
	if (len > n)
		len = n + 1;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
