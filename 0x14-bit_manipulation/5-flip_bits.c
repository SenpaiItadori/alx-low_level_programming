#include "main.h"

/**
 * flip_bits - returns the num of bits one would need to flip to get from
 * one number to another.
 * @n: one of the numbers
 * @m: another one of the numbers
 * Return: flip_bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, i = 0;

	while (xor > 0)
	{
		i += (xor & 1);
		xor >>= 1;
	}
	return (i);
}
