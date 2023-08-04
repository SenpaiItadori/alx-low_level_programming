#include "main.h"

/**
 * main - prints all args it recieves
 * @argc: number of commmand line args
 * @argv: a pointer rto an array of command line args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
