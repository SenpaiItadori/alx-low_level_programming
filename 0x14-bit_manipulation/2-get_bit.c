#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index at which the bit is at
 * Return: tehvalue of the bit at the index, else -1
 */

int get_bit(unsigned long int n, unsigned int index);
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
