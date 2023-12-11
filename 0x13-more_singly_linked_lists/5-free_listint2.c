#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: the listint_t linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	while ((*head)->next != NULL)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	free(*head);
	*head = NULL;
}
