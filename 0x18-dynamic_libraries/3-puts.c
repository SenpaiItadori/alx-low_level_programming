#include "main.h"

/**
 * _puts - prints a string the a new line to stdout
 * @str: the string
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
