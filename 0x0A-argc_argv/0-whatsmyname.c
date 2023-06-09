#include "main.h"

/**
 * main - prints it's own program name and new line
 * @argc: command line arguments count
 * @argv: array of command line arguments
 * Return: 0 on success ,else  1
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
