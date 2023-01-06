#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies 2 numbers that are stored int an int
 * @argc: the argument count to the array argv
 * @argv: the array containing the program command line arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i;

	i = atoi(argv[1]) * atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", i);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
