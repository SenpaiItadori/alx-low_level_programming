#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min amount of coins to make change for an amount of money
 * @argv: program run arguments string of arrays whre amount would be input
 * @argc: string length of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int i, j, k, n, x, y = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = i / 25;
	k = (i % 25) / 10;
	n = (i % 10) / 5;
	x = (i % 5) / 2;
	if (i <= 0)
		printf("0\n");
	if (argc == 2)
	{
		if (i % 25 != 0)
		{
			if (i % 10 != 0)
			{
				if (i % 5 != 0)
				{
					if (i % 2 != 0)
					{
						y = y + k + j + n + x;
						printf("%d\n", y);
					}
					else
						printf("%d\n", k + j + n + x);
				}
				else
					printf("%d\n", j + k + n);
			}
			else
				printf("%d\n", j + k);
		}
		else
			printf("%d\n", j);
	}
	return (0);
}
