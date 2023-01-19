#include "variadic_functions.h"

/**
 * print_strings - prints numbers followed by \n
 * @n: the number of strings to be passed to the function
 * @separator: is the string to be printed btwn strings
 * Return: aint non here
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *j;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char *);
		if (separator == NULL)
		{
			if (j != NULL)
				printf("%s", j);
			else
				printf("(nil)");
		}
		else
		{
			if (i < (n - 1))
			{
				if (j != NULL)
				{
					printf("%s", j);
					printf("%s", separator);
				}
				else
					printf("(nil)");
			}
			else
			{
				if (j != NULL)
					printf("%s", j);
				else
					printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(args);
}
