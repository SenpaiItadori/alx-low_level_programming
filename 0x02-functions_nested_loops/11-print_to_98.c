#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 then \n
 * @n: the starting point of the entire print
 *
 */

void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		for (j = n; j > 98; j--)
			printf("%d, ", j);
		printf("98\n");
	}
}
