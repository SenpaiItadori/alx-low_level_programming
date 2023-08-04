#include "main.h"

/**
 * main - prints the min amount of coins to make change for a cash
 * @argv: a pointer to an array of command oline arguments
 * @argc: the number of command line args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, tens, fives, two, y, sum, cash;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cash = atoi(argv[1]);
	if (cash <= 0)
	{
		printf("0");
		return (0);
	}
	i = cash / 25;
	y = cash % 25;
	tens = y / 10;
	y = y % 10;
	fives = y / 5;
	y = y % 5;
	two = y / 2;
	y = y % 2;

	sum = i + tens + fives + two + y;

	printf("%d\n", sum);
	return (0);
}
