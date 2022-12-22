#include "main.h"
#include <stdio.h>

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	char str[] = "Look up ya bish!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
