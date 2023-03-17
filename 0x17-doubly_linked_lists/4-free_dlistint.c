#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: a pointer to the dlistint
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *crr = head, *ax;

	if (head == NULL)
		return;
	while (crr != NULL)
	{
		ax = crr;
		crr = crr->next;
		free(ax);
	}
}
