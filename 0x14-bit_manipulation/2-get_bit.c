#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @index: is the index starting from 0
 * @n: the number
 *
 * Return: the value of a bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
