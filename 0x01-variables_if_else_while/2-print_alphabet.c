#include <stdio.h>

/**
 * main - prints alphabet in lowercase then a new line
 *
 * Return: 0
 */

int main(void)
{
	int num = 97;

	while (num < 123)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
