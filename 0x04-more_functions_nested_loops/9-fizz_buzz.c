#include <stdio.h>
#include "main.h"

/**
 * main - prints 1-100 followd by a new line
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		 else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
