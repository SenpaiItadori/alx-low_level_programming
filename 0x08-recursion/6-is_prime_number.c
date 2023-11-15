#include "main.h"

/**
 * is_prime_number - checks to see whether a number is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if the num is prime , 0 if otherwise
 */


int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);

	return (seeker(n, 2));
}

/**
 * seeker - calculates if a number is a prime number
 * @num: the number to be checked
 * @start: a number in which we start calculation from
 *
 * Return: 1 if the number is prime, 0 if otherwise
 */

int seeker(int num, int start)
{
	if (start == num)
		return (1);
	if (num % start == 0)
		return (0);
	return (seeker(num, start + 1));
}
