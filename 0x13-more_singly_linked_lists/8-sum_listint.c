#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list
 * @head: a pointer to the listint_t list
 * Return: the result of the datas sum
 */


int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *curr = head;

	if (head == NULL)
		return (0);

	else
	{
		while (curr != NULL)
		{
			i += curr->n;
			curr = curr->next;
		}
	}
	return (i);
}
