#include "lists.h"

/**
 * add_dnodeint - adds a new node @ the beginnning of a dlistint list
 * @head: a pointer to the address of the dlistint doubly linked list
 * @n: the data of the new node to be added to the list
 *
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->prev != NULL)
		(*head) = (*head)->prev;

	new->next = (*head);
	(*head)->prev = new;
	*head = new;

	return (new);
}
