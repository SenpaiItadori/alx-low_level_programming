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
	unsigned int j;

	j = 0;
	i = 1;
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			j = j + atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	if (argc == 1)
	{
		printf("0\n");
	}

	return (0);
}
