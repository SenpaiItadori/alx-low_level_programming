#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
