#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 104, 3, -8756);
	printf("%d\n", sum);
	sum = sum_them_all(0);
	printf("%d\n", sum);
	return (0);
}
