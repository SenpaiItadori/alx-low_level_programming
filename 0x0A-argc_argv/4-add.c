#include "main.h"

/**
 * main - adds positive numbers
 * @argc: the number of command line args
 * @argv: a pointer to an array of commmand line args
 * Return: always 0 or one if failed
 */

int main(int argc, char *argv[])
{
	int i, total_sum = 0, number;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		number = atoi(argv[i]);
		if (number <= 0)
		{
			printf("Error\n");
			return (1);
		}
		total_sum += atoi(argv[i]);
	}

	printf("%d\n", total_sum);
	return (0);
}
