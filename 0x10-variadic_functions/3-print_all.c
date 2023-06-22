#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is a list of aruments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *string;
	unsigned int i = 0, j, c = 0;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format[i] && format)
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} 
			j++;
		}
	}
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(valist, int)), c = 1;
		break;
	case 'i':
		printf("%d", va_arg(valist, int)), c = 1;
		break;
	case 'f':
		printf("%f", va_arg(valist, double)), c = 1;
		break;
	case 's':
		string = va_arg(valist, char *), c = 1;
		if (!string)
		{
			printf("(nil)");
			break;
		}
		printf("%s", string);
		break;
	}
	i++;
}
