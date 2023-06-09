#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - appends n characters of scr to dest
 * @n: the number of bytes to be appended
 * @dest: the appended
 * @src: the appender
 * Return: the result of the append
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
