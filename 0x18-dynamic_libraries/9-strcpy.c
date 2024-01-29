#include "main.h"


/**
 * _strcpy - copies a string to the buffer pointed to by dest
 * @dest: the address of the buffer
 * @src: the string to be copied to dest
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len])
		len++;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
