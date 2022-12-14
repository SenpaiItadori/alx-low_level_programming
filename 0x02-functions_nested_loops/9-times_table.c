#include"main.h"


/**
 * times_table - prints rthe multiplication table for nine
 * Return: the nine times table
 * i still got no idea wha im doing
 */

void times_table(void)
{
	int x, y, z, c, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	c = z % 10;
	d = (z + c) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(c + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
