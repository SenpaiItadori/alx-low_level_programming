#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: the interger value
 * @y: the power
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
