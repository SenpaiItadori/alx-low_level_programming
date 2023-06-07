#include "main.h"

int check(int n, int i);

/**
 * is_prime_number - returns if a number is prime
 * @n: the number to be checked
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (check(n, 1));
}

/**
 * check - method of calculation
 * @i: the number to be checked
 * @k: iteratin
 *
 * Return: 1 or 0
 */

int check(int i, int k)
{
	if (i <= 1)
		return (0);

	if (i % k == 0 && k > 1)
		return (0);

	if ((i / k) < k)
		return (1);

	return (check(i, k + 1));
}
