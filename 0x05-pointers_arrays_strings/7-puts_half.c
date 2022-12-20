#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * puts_half - printrs halfd of thr string
 * @str: the string
 * Return: n/a
 */

void puts_half(char *str)
{
	int i;
	int j;

	j = strlen(str);
	if (j % 2 == 0)
	{
		for (i = j / 2; i < j; i++)
		{
			putchar(str[i]);
		}
	}
	else if (j % 2 != 0)
	{
		for (i = (j - 1) / 2; i < j; i++)
			putchar(str[i]);
	}
	putchar(10);
}
