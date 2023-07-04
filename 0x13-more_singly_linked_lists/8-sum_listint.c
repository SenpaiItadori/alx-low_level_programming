#include "lists.h"

/**
 * sum_listint - sums up all the data(n) of a listint_t list
 * @head: the linked list
 * Return: the summ of all the data
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
