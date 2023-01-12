#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Nope ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
