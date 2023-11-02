#include "main.h"

/**
 * more_numbers - 10 times the numbers, from 0-14 and \n using _putchar 3 times
 *
 */

void more_numbers(void)
{
	int i, j, num, num2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			num = j / 10;
			num2 = j % 10;
			if (num != 0)
				_putchar(num + 48);
			_putchar(num2 + 48);
		}
		_putchar('\n');
	}
}
