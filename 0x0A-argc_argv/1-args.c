#include "main.h"

/**
 * main - prints the number of args passed to it
 * @argc: number of command line argumets
 * @argv: an array of command line arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
