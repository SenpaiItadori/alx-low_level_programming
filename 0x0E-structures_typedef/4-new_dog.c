#include "dog.h"

/**
 * _str_len - calculates the length of a string
 * @str: the string
 * Return: the length of the string
 */

int _str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a struct of dog_t or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _str_len(name);
	len2 = _str_len(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

/**
 * _strcpy - copies string s1 to copy
 * @s1: a pointer to the string to be copied
 * @copy: a pointer to the space in mem where
 *  a copy of s1 is stored
 *
 *  Return: a pointer to copy
 */

char *_strcpy(char *copy, char *s1)
{
	int len, i;

	len = 0;
	while (s1[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		copy[i] = s1[i];
	}
	copy[i] = '\0';

	return (copy);

}
