#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the last digit of n
 *
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0 && n != INT_MIN)
		n = n * -1;
	i = (n % 10) + 48;
	_putchar(i);
	return (n % 10);
}
