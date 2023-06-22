#include "variadic_functions.h"

/**
 * print_strings - prints a string followed by a new line
 * @separator: is the string printed between the strings
 * @n: the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", string);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
