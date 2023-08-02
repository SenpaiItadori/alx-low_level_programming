#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (math(n, 0));
}

/**
 * math - recurses to find a square root of a num
 * @n: th number
 * @i: the initialisation of an iterating  number
 * Return: the square root
 */

int math(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (math(n, i + 1));
}
