#include "main.h"

/**
 * _memcpy -copies n bytes from src to dest
 * @dest: the memory area of be overwritten
 * @src: the memory to be copied
 * @n: the number of bytes
 * Returns:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
