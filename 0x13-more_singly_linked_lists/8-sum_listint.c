#include "lists.h"

/**
 * sum_listint - sums up all the data of a listint_t linkde list
 * @head: the addresss of a listint_t linked list
 *
 * Return: teh sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
