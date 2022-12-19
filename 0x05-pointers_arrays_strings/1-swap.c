#include "main.h"
#include <string.h>

/**
 * swap_int - swaps int a with int b
 * @a: the first integer
 * @b: the second int
 * Return: n/a
 */

void swap_int(int *a, int *b)
{
	int i;
	int *p = &*a;

	i = *a;
	*p = *b;
	*b = i;
}
