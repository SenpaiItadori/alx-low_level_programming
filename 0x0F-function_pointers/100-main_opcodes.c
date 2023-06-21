#include "function_pointers.h"

/**
 * main - Prints the opcodes of the programm
 * @argc: number of command line arguments
 * @argv: an array pointer of all command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int b, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(99);
	}

	b = atoi(argv[i]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == b - 1)
			continue;

		printf(" ");
		address++;
	}

	printf("\n");
	return (0);
}
