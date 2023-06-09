#include "main.h"

/**
 * _memset - fills the first n bytes of memory pointed by s with const byte b
 * @s: the area pointed to by s
 * @b: constant bytes
 * @n: the first bytes to be filled
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
