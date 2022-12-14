#include"main.h"

/**
 * print_last_digit - displays the last digit of y
 * @n: the initial num
 * Return: last number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
