#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to be looked into
 * @key: the key i will be looking for
 *
 * Return: the value to the corresponding key or NULL if not found
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int position;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	position = key_index((const unsigned char *)key, ht->size);
	if (position >= ht->size)
		return (NULL);

	curr = ht->array[position];
	while (curr && strcmp(curr->key, key) != 0)
		curr = curr->next;

	if (curr == NULL)
		return (NULL);
	return (curr->value);
}
