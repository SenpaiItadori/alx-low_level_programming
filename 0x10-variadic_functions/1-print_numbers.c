#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by  a new line
 * @separator: is the string to be printed btwn numbers
 * @n: the least number of args b4 we become variable
 *
 * Return: None
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, number;

	if (n <= 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
