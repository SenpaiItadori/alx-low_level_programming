#include"main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints out every other character of a string from 1st
 * @str: the string
 * Return: n/a
 */

void puts2(char *str)
{
	int i;
	int j;

	j = strlen(str);
	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		else
			continue;
	}
	printf("\n");
}
