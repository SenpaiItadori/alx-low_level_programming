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
	int i;
	int j;
	char mid;
	int k;

	i = strlen(s);
	j = i / 2;
	k = 0;
	k++;
	if (k < j)
	{
		mid = s[k];
		s[k] = s[i - k - 1];
		s[i - k - 1] = mid;
	}
	puts(s);
}
