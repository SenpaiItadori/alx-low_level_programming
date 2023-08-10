#include "main.h"

/**
 * malloc_checked - allocates mem using malloc
 * @b: the size of the allocated mem
 * Return: a pointer to the allocated space in mem
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
