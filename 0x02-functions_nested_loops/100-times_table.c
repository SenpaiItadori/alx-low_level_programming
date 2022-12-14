#include"main.h"

/**
 * print_times_table - print times table for any integer
 * starting fromm nil
 * @n: to be printed multiplication table
 */

void print_times_table(int n)
{
	int num, mpl, res;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (mpl = 1; mpl <= n; mpl++)
	{
	_putchar(',');
	_putchar(' ');
	res = num * mpl;
	if (res == 99)
	_putchar(' ');
	if (res <= 9)
	_putchar(' ')
	if (res >= 100)
	{
	_putchar((res / 100) + '0');
	_putchar((res / 10) % 10 + '0');
	}
	else if (res <= 99 && res >= 10)
	{
	_putchar((res / 10) + '0');
	}
	_putchar((res % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
