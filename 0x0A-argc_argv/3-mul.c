#include "main.h"

/**
 * main - multiplies 2 numbers
 * @argc: the number of command line arguments
 * @argv: an array containing command line args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
