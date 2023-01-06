#include <stdio.h>
#include <string.h>

/**
 * main - prints program name vi argv and argc
 * @argv: an array containing the program command line arguments
 * @argc: the size of the argv array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
