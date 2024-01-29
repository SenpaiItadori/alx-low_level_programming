#include "main.h"

/**
 * _strncat - concats n characters of one of 2 strings
 * @dest: the string to be concatenated
 * @src: the concatenater
 * @n: the number of bytes to be added to dest
 *
 * Return: the concated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
