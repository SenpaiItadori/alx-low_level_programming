#include "main.h"

/**
 * _abs - computes the absolute value fo an integer
 * @n: the integer
 *
 * Return: the absolute val of a intt
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
