#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 *
 * Return: void
 */
void
hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *cursor = NULL;
	int comma = 0;

	if (!ht)
		return;

	printf("{");

	while (index < ht->size)
	{
		cursor = ht->array[index++];

		if (!cursor)
			continue;

		while (cursor)
		{
			if (comma)
				printf(", ");
			else
				comma = 1;

			printf("'%s': '%s'", cursor->key, cursor->value);
			cursor = cursor->next;
		}
	}

	printf("}\n");
}
