#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list-t list
 * @head: a pointer to the address of the list_t list
 * @str: value of str in a list_t node
 * Return: the address of the new elements or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int i = 0;
	list_t *new_node = malloc(sizeof(list_t)), *current_node;

	if (new_node == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; str[i];)
		i++;
	new_node->str = duplicate;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
