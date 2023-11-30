#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	int num;
	char *str, *sep = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					num = va_arg(args, int);
					printf("%s%d", sep, num);
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
