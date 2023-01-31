#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at position idx
 * @head:  adouble pointer to the list
 * @idx: the indez of the list where the new node should be added
 * @n: the data of the new node
 * Return: the address of the new node ..else = NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new_node == NULL || *head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = curr;
		*head = new_node;
		return (new_node);
	}
	while (curr != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
