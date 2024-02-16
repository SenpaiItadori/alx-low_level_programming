#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *curr, *tmp;
	unsigned long int i;

	for (i = 0 ; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				tmp = curr->next;
				free(curr->key);
				free(curr->value);
				free(curr);
				curr = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
