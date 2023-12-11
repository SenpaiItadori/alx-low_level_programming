#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the listint_t linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	curr = head->next;
	while (curr)
	{
		curr = head->next;
		free(head);
		head = curr;
	}

	head = NULL;
}
