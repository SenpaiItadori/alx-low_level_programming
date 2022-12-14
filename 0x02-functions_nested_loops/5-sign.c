#include"main.h"

/**
 * print_sign - print the sign of a num
 * @n: the num to be checked
 * Return: 1 is >zero ,0 if zero ,-1 <zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
