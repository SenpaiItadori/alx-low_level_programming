#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_rev - prints character in reverse
 * @str: the string or character to be reversed
 * Return: n/a
 */

void print_rev(char *str)
{
	int i;
	char temp;
	int length;
	int midpoint;

	length = strlen(str);
	midpoint = length / 2;
	for (i = 0; i < midpoint; i++)
	{
		temp =str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
	puts(str);
}
