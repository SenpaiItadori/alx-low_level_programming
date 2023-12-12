#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given poosition
 * @head: the listint linked lisrt that is to be modified
 * @idx: where the new node should be added starting at 0
 * @n: the data to be stored in the node
 *
 * Return: the address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	for (i = 0; i < idx; i++)
	{
		if (*head == NULL)
			return (NULL);
		if (i < idx - 1)
			(*head) = (*head)->next;
	}
	new->next = (*head)->next;
	(*head)->next = new;

	return (*head);
}
