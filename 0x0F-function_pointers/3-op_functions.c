#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - adds 2 ints
 * @a: int 1
 * @b: int 2
 * RetUrn: the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 ints
 * @a: int a
 * @b: int b
 * Return: the result of the operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 ints
 * @a: int 1
 * @b: int 2
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a with b
 * @a: the first int
 * @b: the diviser
 * Return: the qu0tient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a /b
 * @a: the dividend
 * @b: the diviser
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
