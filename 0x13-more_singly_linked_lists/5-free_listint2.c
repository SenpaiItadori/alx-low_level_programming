#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and then sets it to NULL
 * @head: a pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *anx;

	if (head == NULL)
		return;

	while (*head)
	{
		anx = (*head)->next;
		free(*head);
		*head = anx;
	}

	*head = NULL;
}
