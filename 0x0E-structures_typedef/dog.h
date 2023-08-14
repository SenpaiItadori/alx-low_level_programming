#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct dog - a dog struct
 * @name: the name of the dog
 * @age: the age of the daog
 * @owner: the owner of the dog
 *
 * Description: This struct musrt define a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

char *_strcpy(char *copy, char *s1);
int _str_len(char *str);

#endif
