#include <stdio.h>
#include <stdlib.h>

/**
 * main - prinrts the name of the file it was compiled from
 * Return: always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
