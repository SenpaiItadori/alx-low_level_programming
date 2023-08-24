#include "lists.h"

/**
 * add_node_end - adds a new node at the end o a list_t list
 * @head: the list_t linked list
 * @str: contents of the new node t obe added
 *
 * Return: the address of the new elemnt
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	char *duplicate = strdup(str);
	list_t *curr, *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (duplicate[i])
		i++;

	new_node->str = duplicate;
	new_node->len = i;
	new_node->next = NULL;

	curr = (*head);
	if (curr == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;

	curr = curr->next;
	return (curr);
}
