#include "main.h"
#include<stdio.h>

/**
 * print_number - doesnt tdo that at all does it?
 * @n: to be printed
 * return: n/a
 */

void print_number(int n)
{

	unsigned int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		putchar('-');
	}
	i /= 10;
	if (i != 0)
	{
		print_number(i);
	}
	putchar((unsigned int) n % 10 + '0');
}
