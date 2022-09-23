#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to hash_tabl_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int index = 0;

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	while (index < size)
		ht->array[index++] = NULL;

	return (ht);
}
