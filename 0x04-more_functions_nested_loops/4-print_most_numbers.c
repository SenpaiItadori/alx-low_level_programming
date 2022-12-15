#include<stdio.h>
#include"main.h"

/**
 * print_most_numbers - prints most numbers from 0-9
 * Return: all from 0-9 but 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
			continue;
		putchar(i);
	}
	putchar(10);
}
