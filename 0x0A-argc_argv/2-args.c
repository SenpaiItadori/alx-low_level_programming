#include "main.h"

/**
 * main - prints it's own program name and new line
 * @argc: command line arguments count
 * @argv: array of command line arguments
 * Return: 0 on success ,else  1
 */

int main(int argc, char *argv[])
{
	int argcount = 0;

	for (argcount = 0; argcount < argc; argcount++)
	{
		printf("%s\n", argv[argcount]);
	}
	return (0);
}
