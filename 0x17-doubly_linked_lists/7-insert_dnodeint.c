#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the address of a dlistint_t linked list
 * @idx: the position in which the new node is to be inserted
 * @n: the data(n) of the new node
 *
 * Return: the address of the new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = curr;
	new->next = curr->next;
	curr->next->prev = new;
	curr->next = new;

	return (new);
}
