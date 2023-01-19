#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all ts parameters
 * @n: last arguments B4 the list of variable num of arguments
 * Return: the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j, k;

	k = 0;
	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			j = va_arg(args, int);
			k = k + j;
		}
		va_end(args);
		return (k);
	}
	va_end(args);
	return (0);

}
