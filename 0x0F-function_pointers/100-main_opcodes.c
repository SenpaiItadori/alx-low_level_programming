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

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;

		printf(" ");
		address++;
	}

	printf("\n");
	return (0);
}
