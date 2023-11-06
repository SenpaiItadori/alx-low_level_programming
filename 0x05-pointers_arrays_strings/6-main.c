#include "main.h"

/**
 * puts2 - prints every other char of a string then \n
 * @str: the string
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i])
		i++;
	}
	_putchar('\n');
}
