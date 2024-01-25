#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t linked list
 * @head: the address of the doubly linkde list to be freed
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	curr = head;

	while (head != NULL)
	{
		head = head->next;
		free(curr);
		curr = head;
	}

	head = NULL;
}
