#include <stdio.h>
#include "function_pointers.h"

/**
 * prints_name_as_is - prints name as it is
 * @name: name of the person
 * Return: non
 */

void print_name_as_is(char *name)
{
	printf("Hello, my mname is %s\n", name);
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: the name of the person
 * Return: non
 */

void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("hello, my uppercase name is");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	print_name("Ryan", print_name_as_is);
	print_name("Ryan Nyoni", print_name_uppercase);
	printf("\n");
	return (0);
}
