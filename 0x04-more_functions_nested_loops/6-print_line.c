#include"main.h"
#include<stdio.h>

/**
 * print_line - like it doesnt print a line
 * why areyou reading this
 * @n: number of times the line is printed
 * Return: line printed n times
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}
		putchar(10);
	}
	else
		putchar(10);
}
