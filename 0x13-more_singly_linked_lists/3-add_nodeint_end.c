#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t list
 * @head: a pointer to the address of a listint_t list
 * @n: the data of the node to the added
 *
 * Return: the address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head, *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;

	return (new_node);
}
