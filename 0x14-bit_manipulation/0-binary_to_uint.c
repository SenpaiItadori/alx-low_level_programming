#include "main.h"

/**
 * binary_to_uint - converts a binary num to an unsigned int
 * @b: a pointer to the string containing a string of 0 and 1 chars.
 * Return: te converted number or 0 if string is not 1s and 0s
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		j = 2 * j + (b[i] - '0');
	}
	return (j);
}
