#include "main.h"

/**
 * flip_bits - returns the num of bits you need to flip to get
 * from one number to another
 * @n: the first number
 * @m: the number we flip n to
 *
 * Return: the number of bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int curr, k = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = k >> i;
		if (curr & 1)
			j++;
	}

	return (j);
}
