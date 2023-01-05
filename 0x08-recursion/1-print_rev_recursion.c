#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints string s in reverse
 * @s: the string to be printed
 * Return: n/a
 */

void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;
	int j = i;

	if (j < 0)
		return;
	if (j >= 0)
	{
		putchar(s[j]);
		j--;
		_print_rev_recursion(s);
	}
}
