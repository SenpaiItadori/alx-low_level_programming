#include "variadic_functions.h"

/**
 * sum_them_all - sums up all of its parameters
 * @n: the least argument b4 the variable list of args
 * Return: the sum of all parameter ints
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	return (sum);
}
