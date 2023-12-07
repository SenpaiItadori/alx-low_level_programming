#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the address of the list_t list
 * @str: the information of the new node
 *
 * Return: the address of the new node or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new, *curr = *head;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (curr->next)
		curr = curr->next;

	curr->next = new;

	return (new);
}
