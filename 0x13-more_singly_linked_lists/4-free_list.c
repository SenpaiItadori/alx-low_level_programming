#include "lists.h"

/**
 * free_list - fress a list_t list
 * @head: the list to be freed
 */

void free_list(list_t *head)
{
	list_t *yes;

	while (head)
	{
		yes = head->next;
		free(head->str);
		free(head);
		head = yes;
	}
}
