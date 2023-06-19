#include "dog.h"

/**
 * init_dog - initialises a varible of type struct dog
 * @d: struct dog
 * @name: the name of the dog
 * @age: the age of he dog
 * @owner: the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
