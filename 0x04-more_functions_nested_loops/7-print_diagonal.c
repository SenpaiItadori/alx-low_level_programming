#include"main.h"
#include<stdio.h>

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times \ is printed
 * Return: aint no return yall
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
				putchar(32);
			putchar(92);
			putchar(10);
		}
	}
	else
		putchar(10);
}
