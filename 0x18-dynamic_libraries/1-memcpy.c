#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the mem area to store the copied data
 * @src: the memory area to copy from
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
