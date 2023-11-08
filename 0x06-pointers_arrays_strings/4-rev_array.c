#include "main.h"

/**
 * reverse_array - reverses the content of  an array of ints
 * @a: an array of integers
 * @n: is the number of element6s of the array
 */

void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
