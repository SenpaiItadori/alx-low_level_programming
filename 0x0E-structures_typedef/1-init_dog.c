#include "dog.h"

/**
 * init_dog - inits a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: a pointer to the name of he dog
 * @age: th e age ofthe dog
 * @owner: the owner of the dog
 *
 * Return: N/A
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
