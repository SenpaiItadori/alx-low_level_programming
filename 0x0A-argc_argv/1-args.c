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
	int i;
	(void)argv;

	i = argc - 1;
	printf("%d\n", i);

	return (0);
}
