#include "main.h"

/**
 * _puts_recursion - prints a string then new line
 * @s: a pointer to the string to be written
 * Return: non
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
