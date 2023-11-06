#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: the string
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len])
		len++;

	if (len % 2 == 0)
	{
		for (i = 0; i < len; i++)
		{
			if (i > (len / 2 - 1))
			{
				_putchar(str[i]);
			}
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (i > len / 2)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
