#include "lists.h"

/**
 * free_listint2 - fress a listint_t list
 * @head: the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *yes;

	if (head == NULL)
		return;

	while (*head)
	{
		yes = (*head)->next;
		free(*head);
		(*head) = yes;
	}
	head = NULL;
}
