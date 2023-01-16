#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the identity of a dog
 * @d: pointer to the identity struct
 * Return: there aint non
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else
	{
		if (((*d).name) == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", (*d).name);
		if (!((*d).age))
			printf("Age: (nil)");
		printf("Age %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", (*d).owner);
	}
}
