#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to tyhe value
 * @index: the index at which the bit is set to 0
 * Return: 1 , else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
