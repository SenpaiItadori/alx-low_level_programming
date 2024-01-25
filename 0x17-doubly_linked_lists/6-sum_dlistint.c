#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data(n) of a dlistint_t linked list
 * @head: the address of the dlistint doubly linked list
 *
 * Return: the sum of all the data of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
