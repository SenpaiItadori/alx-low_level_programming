#include "main.h"

/**
 * main - prints it's own program name and new line
 * @argc: command line arguments count
 * @argv: array of command line arguments
 * Return: 0 on success ,else  1
 */

int main(int argc, char *argv[])
{
	int iteration = 1;
	unsigned int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (iteration = 1; iteration < argc; iteration++)
	{
		if (!(atoi(argv[iteration])))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[iteration]);
	}

	printf("%d\n", sum);
	return (0);
}
