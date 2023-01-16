#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: he age of the dog
 * @owner: the owner of the dog
 * Return: there is no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> *name;
	d ->age;
	d -> *owner;
}
