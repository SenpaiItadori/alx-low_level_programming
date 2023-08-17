#include "variadic_functions.h"

/**
 * print_strings - prints strings , followed by a new line
 * @separator: is the string printed btwn the strings
 * @n: the minimum number of args b4 we get variable
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n <= 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
