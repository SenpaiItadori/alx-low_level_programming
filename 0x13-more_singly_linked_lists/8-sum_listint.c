#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: the listint_t linked list
 *
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int num = 0;

	while (head != NULL)
	{
		num = num + head->n;
		head = head->next;
	}
	return (num);
}
