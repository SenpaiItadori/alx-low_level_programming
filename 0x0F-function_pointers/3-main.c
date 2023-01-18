#include <stdio.h>
#include "function_pointers.h"

/**
 * main - performs simple operations
 * @argv: programm arguments
 * @argc: argument count
 * Return: result of operation or if failure , some error
 */

int main(int argc, char *argv[])
{
	int j, k, res;
	int(*func)(int, int);
	char y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	j = atoi(argv[1]);
	k = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	y = *argv[2];
	if ((y == '/' || y == '%') && k == 0)
	{
		printf("Error");
		exit(100);
	}
	res = func(j, k);
	printf("%d\n", res);
	return (0);
}
