#include <stdio.h>
#include "main.h"
#include<string.h>

/**
 * leet - encodes a string src into 1337
 * Return: the encode string
 * @src: the string to be encoded
 */

char *leet(char *src)
{
	int i;
	int m;
	char letter[10] = "aAeEoOtTlL";

	i = 0;
	while (src[i])
	{
		if (src[i] == letter[m])
		{
			for (m = 0; m < 2; m++)
				src[i] = '4';
			for (m = 2; m < 4; m++)
				src[i] = '3';
			for (m = 4; m < 6; m++)
				src[i] = '0';
			for (m = 6; m < 8; m++)
				src[i] = '7';
			for (m = 8; m < '\0'; m++)
				src[i] = '1';
		}
		i++;
	}
	return (src);
}
