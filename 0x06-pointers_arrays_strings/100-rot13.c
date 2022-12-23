#include<stdio.h>
#include"main.h"

/**
 * rot13 - rotates string src chars by 13 ascii
 * Return: the rotated src
 * @src: the string to be done
 */

char *rot13(char *src)
{
	int i;

	i = 0;
	while (src[i]) 
	{
		if ((src[i] <= 'z' && src[i] >= 'a') || (src[i] <= 'Z' && src[i] >= 'A'))
		{
			if (src[i] > 13)
			{
				src[i] -= 13;
			}
			if (src[i] <= 13)
			{
				src[i] += 13;
			}
		}
		i++;
	}
	return (src);
}
