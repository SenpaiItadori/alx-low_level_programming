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
	char num[10] = "4433007711";
	char letter[10] = "aAeEoOtTlL";

	i = 0;
	while (src[i])
	{
		for (m = 0; m < 10; m++)
		{
			if (src[i] == letter[m])
			{
				src[i] = num[m];
			}
		}
		i++;
	}
	return (src);
}
