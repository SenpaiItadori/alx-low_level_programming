#include <stdio.h>
#include "lists.h"

/**
 * main - code checker
 * Return: 0
 */

int main(void)
{
	listint_t *head;

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
	return (0);
}
