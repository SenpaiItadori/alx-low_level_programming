#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: the number of args i guess
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, integers = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		integers = integers + va_arg(args, int);
	}

	va_end(args);

	return (integers);
}
