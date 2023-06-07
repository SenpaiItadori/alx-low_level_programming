#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - method of calculation
 * @i: the number
 * @k: iteratin
 *
 * Return: the natuarl square
 */

int _sqrt(int i , int k)
{
	int square = k * k;

	if (square > i)
		return (-1);

	if (square == i)
		return (k);

	return (_sqrt(i, k + 1));
}
