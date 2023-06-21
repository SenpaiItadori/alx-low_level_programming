#include "3-calc.h"

/**
 * op_add - returns the sum of a n b
 * @a: int a
 * @b: int b
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference btwn 2 ints
 * @a: int a
 * @b: the subtractor
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of 2 ints
 * @a: int a
 * @b: the multiplier
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the divison of a & b
 * @a: the divident
 * @b: the divisor
 * Return: the quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}

/**
 * op_mod - returns the modulus of the division of a & b
 * @a: the divident
 * @b: the divisor
 * Return: the modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
