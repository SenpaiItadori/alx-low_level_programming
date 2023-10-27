#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 from 0 and \n
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
