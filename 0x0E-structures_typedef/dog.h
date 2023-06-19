#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct dog - a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Description: a dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
