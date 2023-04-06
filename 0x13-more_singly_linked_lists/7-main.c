#include <stdio.h>
#include "lists.h"

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	listint_t *head;
	listint_t *node;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 5);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	add_nodeint_end(&head, -2);
	add_nodeint_end(&head, 9);
	add_nodeint_end(&head, 11);
	print_listint(head);
	node = get_nodeint_at_index(head, 1);
	printf("%d\n", node->n);
	print_listint(head);
	free_listint2(&head);
	return (0);
}