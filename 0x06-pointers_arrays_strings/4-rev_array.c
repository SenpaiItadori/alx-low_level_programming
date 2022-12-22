#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array of integers
 * @a: the array
 * @n: number of elements in the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
