#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: the num
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if ((i < n) && ((n / i) != i))
	{
		return (-1);
	}
	i = i + 1;
	return (i);
}
