#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address of the memoty area
 * @b: this is the constant byte talked about ealier
 * @n: the amount of bytes to be first fill by b
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
