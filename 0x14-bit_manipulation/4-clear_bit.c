#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: a pointer to the number decimal
 * @index: is the index, starting rom 0
 *
 * Return: 1 if it works -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
