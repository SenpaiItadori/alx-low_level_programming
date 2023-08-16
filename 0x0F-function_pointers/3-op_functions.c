#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: the fisrst number
 * @b: the sec number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: the subtracted
 * @b: the subtrsctor
 *
 * Return: the differece btwn a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: one number
 * @b: the other number
 *
 * Return: the product of a & b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: the quotient
 * @b: the divisor
 *
 * Return: the divident of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides a by b
 * @a: the quotient
 * @b: the divisor
 *
 * Return: the remainder of a / b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
