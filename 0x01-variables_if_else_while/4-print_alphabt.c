#include <stdio.h>

/**
 * main - prints alphabet but q and e in lowercase then a new line
 *
 * Return: 0
 */

int main(void)
{
	int num = 97;

	while (num < 123)
	{
		if (num != 113 && num != 101)
			putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
