#include "hash_tables.h"

/**
 * hash_table_create - createas a hash table
 * @size: the size of the table or array created
 * Return: a poiner ro the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t));

	return (new_table);
}
