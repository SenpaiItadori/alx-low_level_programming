#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int i, j, product, first, second;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 0)
			{
				product = i * j;
				first =  product / 10;
				second = product % 10;
				if (first != 0)
					_putchar(first + '0');
				else
					_putchar(' ');
				_putchar(second + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
