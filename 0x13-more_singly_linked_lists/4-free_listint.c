#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *anx;

	if (head == NULL)
		return;

	while (head)
	{
		anx = head->next;
		free(head);
		head = anx;
	}

	head = NULL;
}
