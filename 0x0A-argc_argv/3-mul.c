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
	if (argc == 3)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
