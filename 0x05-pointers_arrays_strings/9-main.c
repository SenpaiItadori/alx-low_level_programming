#include "main.h"
#include <stdio.h>

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, resove the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
