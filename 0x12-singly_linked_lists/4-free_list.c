#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the linked list
 */

void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
