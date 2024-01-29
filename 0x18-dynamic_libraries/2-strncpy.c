#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * _strncpy - copies n bytes of src to dest
 * @src: the string with the copied characters
 * @dest: the string to be modified by the copied chars
 * @n: the bytes to be copied
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
