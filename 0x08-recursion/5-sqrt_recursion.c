#include "main.h"

/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: the number
 *
 * Return: the natural square of a number or -1 if non-existant
 */

int _sqrt_recursion(int n)
{
	int num;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	if (n % 2 == 1)
		num = (n / 2) + 1;
	else
		num = n / 2;
	return (_s_root(num, 0));
}

/**
 * _s_root - caluculates the root of a number
 * @num: half the number
 * @start: the beginning of the count
 *
 * Return: the root of a number
 */

int _s_root(int num, int start)
{
	int square = start * start;

	if (start > num)
		return (-1);
	if (num % 2 == 1)
	{
		if (square == (num * 2) - 1)
			return (start);
	}
	else
	{
		if (square == num * 2)
			return (start);
	}
	return (_s_root(num, start + 1));
}
