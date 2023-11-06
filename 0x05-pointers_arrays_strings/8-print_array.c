#include "main.h"

/**
 * print_array - prints n elements of an array then \n
 * @n: the number of elements to be printed
 * @a: the array of ints
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n)
			break;
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
