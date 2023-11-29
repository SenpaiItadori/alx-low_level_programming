#include "function_pointers.h"

/**
 * print_name - prints a name to stdout
 * @name: the name to be printed
 * @f: a pointer to a function that prints a name or edits it
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
