#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -code checker
 *
 * Return: 0
 */

int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory \n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}