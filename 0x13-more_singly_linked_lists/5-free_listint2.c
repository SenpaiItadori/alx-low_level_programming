#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a double pointer to a listint_t list
 * Return: n/a
 */

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *ax;

	while (curr != NULL)
	{
		ax = curr;
		curr = curr->next;
		free(ax);
	}
	*head = NULL;
}
