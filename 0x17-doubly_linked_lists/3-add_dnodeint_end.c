#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a ponter to the address of the dlistint_t linked list
 * @n: the data of the new node to be added to the end of the list
 *
 * Return: the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while ((*head)->next != NULL)
		(*head) = (*head)->next;

	new->prev = (*head);
	(*head)->next = new;
	*head = new;

	while ((*head)->prev != NULL)
		(*head) = (*head)->prev;
	return (new);
}
