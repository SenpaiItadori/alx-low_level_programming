#include <stdio.h>
#include <string.h>

/**
 * main - prints all the arguments it recieves
 * @argc: the count of arguments that run the file
 * @argv: an array containing the program comand line arguments
 * Rerurn: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
