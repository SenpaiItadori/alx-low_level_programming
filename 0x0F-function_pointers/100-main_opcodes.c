#include "3-calc.h"

/**
 * main - peprints opcaodes of its own mnmain function
 * @argc: thge nember of command line arguments
 * @argv: an array containing command line arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int j, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
