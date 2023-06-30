#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list-t list
 * @head: a pointer to the address of the list_t list
 * @str: value of str in a list_t node
 * Return: the address of the new elements or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = duplicate;
	new_node->len = len;

	return (*head);
}
