#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 *
 * Return: void
 */
void
hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *cursor = NULL, *deleted = NULL;

	if (!ht)
		return;

	while (index < ht->size)
	{
		cursor = ht->array[index++];

		while (cursor)
		{
			deleted = cursor;
			cursor = cursor->next;

			free(deleted->key);
			free(deleted->value);
			free(deleted);
		}
	}

	free(ht->array);
	free(ht);
}
