#include "main.h"

/**
 * is_prime_number - checks to see if a number is  prime
 * @n: the number
 * Return: 1 if num is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number_math(n, n - 1));
}


/**
 * prime_number_math - using recursion, checks to see if a num is prime
 * @n: the number
 * @i: the iteraton number
 * Return: 1 is n is prime, otherwise 0
 */

int prime_number_math(int n , int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number_math(n, i - 1));
}
