#include "3-calc.h"

/**
 * main - does simple math operations
 * @argc: number of cmmand line args
 * @argv: array containing all cammand line args
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	op = argv[2];
	j = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[i] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && j == 0) ||
		(*op == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(i, j));
	return (0);
}
