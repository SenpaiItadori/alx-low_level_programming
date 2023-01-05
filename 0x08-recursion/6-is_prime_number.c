#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - sees if an interger n is  a prime number
 * @n: the interger to be tested
 * Return: 1 if true 0 if false
 */

int is_prime_number(int n)
{
	int b;

	b = (n / 2) + 1;
	if ((b <= 1) && (n % b != 0))
		return (0);
	if(b > 0)
	{
		b--;
		if (n % b == 0)
		{
			is_prime_number(n);
		}
	}
	return (1);
}
