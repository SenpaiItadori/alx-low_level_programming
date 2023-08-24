#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the linked list_t list
 * @str: content of the new node
 *
 * Return: the address of the new node, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *duplicate;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);

	while (duplicate[i])
		i++;

	new_node->str = duplicate;
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
