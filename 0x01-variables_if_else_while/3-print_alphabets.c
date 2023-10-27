#include <stdio.h>

/**
 * main - prints alphabet in lowercase, uppercase then a new line
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 97; num < 123; num++)
		putchar(num);
	for (num = 65; num < 91; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
