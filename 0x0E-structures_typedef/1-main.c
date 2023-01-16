#include <stdio.h>
#include "dog.h"

/**
 * main - code checker
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name id %s, and i am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
