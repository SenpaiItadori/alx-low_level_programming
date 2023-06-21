#include "3-calc.h"

/**
 * main - calculates an operation between 2 numbers
 * @argc: the number of command line arguments
 * @argv: the array containg command line arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x, y, (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
			exit(99);
	}

	printf("%d\n", operation(x, y));
	return (0);
}
