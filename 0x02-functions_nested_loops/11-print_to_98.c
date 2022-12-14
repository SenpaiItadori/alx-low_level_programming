#include"main.h"
#include<stdio>

/**
 * print_to_98 - literally does exactly that
 * @n: the tag
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	print("\n");
	break;
	}
	else
	{
	printf("%d, ");
	}
	}
	}
}
