#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed by src to the buffer pointed by dest
 * @dest: the buffer
 * @src: the string to be copied
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
