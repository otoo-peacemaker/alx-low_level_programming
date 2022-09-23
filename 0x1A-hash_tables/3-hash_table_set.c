#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_hash_node = NULL;
	hash_node_t *cursor = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	cursor = ht->array[index];

	/* check if key exists */
	while (cursor && strcmp(cursor->key, key) != 0)
		cursor = cursor->next;

	/* update value if key already exists */
	if (cursor)
	{
		free(cursor->value);
		cursor->value = strdup(value);
		return (1);
	}

	/* add new node if key not found */

	new_hash_node = malloc(sizeof(*new_hash_node));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;

	return (1);
}
