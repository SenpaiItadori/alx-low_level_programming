#include "lists.h"

/**
 * add_nodeint - adds a neew node at the beginning of a listint_t list
 * @head: a pointer to the node pointer or listint_t element
 * @n: the integer value to be added
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
