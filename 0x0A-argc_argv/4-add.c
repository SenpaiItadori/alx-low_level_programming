#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds numbers that are stored an int in argv
 * @argc: the argument count to the array argv
 * @argv: the array containing the program command line arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i;
	int j;

	j = 0;
	if (argc >= 3)
	{
		for (i = 1; i < '\0'; i++)
		{
			j = j + atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
