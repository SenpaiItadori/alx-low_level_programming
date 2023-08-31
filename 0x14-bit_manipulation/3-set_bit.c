#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a ponter to the integer value
 * @index: is the index starting from 0
 *
 * Return: 1 if it worked , -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 630)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
