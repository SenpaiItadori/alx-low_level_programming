#include "main.h"

/**
 * main - prints it's own program name and new line
 * @argc: command line arguments count
 * @argv: array of command line arguments
 * Return: 0 on success ,else  1
 */

int main(int argc, char *argv[])
{
	int firstnumber, secnumber;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstnumber = atoi(argv[1]);
	secnumber = atoi(argv[2]);

	printf("%d\n", secnumber * firstnumber);
	return (0);
}
