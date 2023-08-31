#include "main.h"

/**
 * binary_to_uint - converts a  binary number to an unsigned int
 * @b: a pointer to a string of 0s and 1s
 *
 * Return: the converted num or 0 if string has other chars or is = NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, value, j, temp, base = 1;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	value = 0;

	temp = atoi(b);
	while (temp != 0)
	{
		j = temp % 10;
		temp = temp / 10;

		value += j * base;
		base = base * 2;
	}

	return (value);
}
