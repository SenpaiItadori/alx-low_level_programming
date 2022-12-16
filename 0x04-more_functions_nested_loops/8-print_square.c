#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a # square followed by a new line
 * @size: size of the square
 * Return: n/a
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				putchar(35);
			}
			putchar(10);
		}
	}
	else
		putchar(10);
}
