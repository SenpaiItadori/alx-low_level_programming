#include "hash_tables.c"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key and it connot be an empty string
 * @value: is the value associated with the key, must be duped and can be empty
 *
 * Return: 1 if successful, 0 if otherwise
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position;
	hash_node_t *curr, *tmp;

	if (key == "" || key = NULL)
		return (0);
	position = key_index(key, ht->size);

	curr = ht->array[position];
	tmp = ht->array[position];
	tmp->key = key;
	tmp->value = strdup(value);
	tmp->next = NULL;

	if (curr == NULL)
	{
		curr = tmp;
		return (1);
	}

	while (curr != NULL)
	{
		curr = curr->next;
	}
	curr->next = tmp;

	return (1);
}
