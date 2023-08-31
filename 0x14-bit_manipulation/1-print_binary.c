#include "main.h"

/**
 * print_binary - prints a the binary representation of a number
 * @n: the number to print ni binary
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = n >> i;
		if (value & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
