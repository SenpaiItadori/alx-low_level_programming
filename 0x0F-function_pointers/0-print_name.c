#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name .
 * @name: the name
 * @f: the pointer to the name
 * Return: no return here
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
