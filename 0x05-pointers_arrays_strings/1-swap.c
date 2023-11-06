#include "main.h"

/**
 * swap_int - swaps the value of 2 ints
 * @a: the first int
 * @b: the other int
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
