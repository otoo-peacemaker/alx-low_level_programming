#include "hash_tables.h"
#include <string.h>
#include <stddef.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key of the new element
 *
 * Return: Return the key value or NULL if key couldn't be found
 */
char *
hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cursor = NULL;

	if (!ht || !key || !(*key))
		return (NULL);

	cursor = ht->array[key_index((unsigned char *) key, ht->size)];

	while (cursor && strcmp(key, cursor->key) != 0)
		cursor = cursor->next;

	return (cursor ? cursor->value : NULL);
}
