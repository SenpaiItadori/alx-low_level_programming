#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase then a '\n'
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
