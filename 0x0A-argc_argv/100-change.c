#include "main.h"

/**
 * main - prints it's own program name and new line
 * @argc: command line arguments count
 * @argv: array of command line arguments
 * Return: 0 on success ,else  1
 */

int main(int argc, char *argv[])
{
	int sum = 0, remainder, number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	if (number > 0)
	{
		remainder = number % 25;
		if (number >= 25)
		{
			sum = number / 25;
		}
		if (remainder >= 10)
		{
			sum = sum + (remainder / 10);
			remainder = remainder % 10;
		}
		if (remainder >= 5)
		{
			sum = sum + (remainder / 5);
			remainder = remainder % 5;
		}
		if (remainder >= 2)
		{
			sum = sum + (remainder / 2);
			remainder = remainder % 2;
		}
		sum = sum + remainder;
	}

	printf("%d\n", sum);
	return (0);
}
