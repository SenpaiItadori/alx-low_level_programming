#include "lists.h"

/**
 * free_listint - fress a listint_t list
 * @head: the list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *yes;

	while (head)
	{
		yes = head->next;
		free(head);
		head = yes;
	}
	head = NULL;
}
