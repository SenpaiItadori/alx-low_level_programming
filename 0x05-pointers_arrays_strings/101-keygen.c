#include<stdio.h>
#include<time.h>
#include <stdlib.h>

/**
 * main - prints random valid character password
 * Return: 0
 */

int main (void)
{
	char random;

	srand(time(0));

	random = rand() % 16;

	printf("%s\n", random);
	return (0);
}
