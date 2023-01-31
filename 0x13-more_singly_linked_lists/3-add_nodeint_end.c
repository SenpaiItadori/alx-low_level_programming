#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a function listint_t list
 * @head: a pointer ro the pointer of the new value
 * @n: the new int to be added
 * Return: the address of the newelement of NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new_node == NULL)
		return (NULL);

	if (*curr == NULL)
	{
		*curr = new_node;
		return (new_node);
	}

	new_node->next = NULL;
	new_node->n = n;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	return (new_node);
}
