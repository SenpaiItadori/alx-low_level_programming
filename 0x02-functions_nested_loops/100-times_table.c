#include"main.h"

/**
 * print_times_table - print times table for any integer
 * starting fromm nil
 * @n: to be printed multiplication table
 */

void print_times_table(int n)
{
	int num, mple, rest;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (mple = 1; mple <= n; mple++)
	{
	_putchar(',');
	_putchar(' ');
	rest = num * mple;
	if (rest == 99)
	_putchar(' ');
	if (rest <= 9)
	_putchar(' ');
	if (rest >= 100)
	{
	_putchar((rest / 100) + '0');
	_putchar((rest / 10) % 10 + '0');
	}
	else if (rest <= 99 && rest >= 10)
	{
	_putchar((rest / 10) + '0');
	}
	_putchar((rest % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
