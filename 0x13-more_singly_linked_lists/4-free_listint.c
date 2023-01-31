#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the listint_t list
 * Return: n/a
 */

void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *ax;

	while (curr != NULL)
	{
		ax = curr;
		curr = curr->next;
		free(ax);
	}
}
