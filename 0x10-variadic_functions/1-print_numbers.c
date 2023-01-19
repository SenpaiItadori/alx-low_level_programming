#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by \n
 * @n: teh number of ints to be passed to the function
 * @separator: is the dtring to be printed btwn nums
 * Return: aint non here
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		if (separator == NULL)
		{
			printf("%d", j);
		}
		else
		{
			if (i < (n - 1))
			{
				printf("%d", j);
				printf("%s", separator);
			}
			else
			{
				printf("%d", j);
			}
		}
	}
	printf("\n");
	va_end(args);
}
