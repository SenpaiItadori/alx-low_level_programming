#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: is the size of the triangle
 * Return: that is not applicable
 */

void print_triangle(int size)
{
	int i, k, j;
	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = size - j; k > 1; k--)
			{
				putchar(32);
			}
			for (i = 0; i <= j; i++)
			{
				putchar(35);
			}
			putchar(10);
		}
	}
	else
		putchar(10);
}
