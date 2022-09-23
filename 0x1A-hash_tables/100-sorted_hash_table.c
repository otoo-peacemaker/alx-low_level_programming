#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table
 * @size: The size of the hash table
 *
 * Return: A pointer to hash_tabl_t
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	unsigned long int index = 0;

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	while (index < size)
		ht->array[index++] = NULL;

	return (ht);
}

/**
 * _shash_table_insert_sorted - sorted insert in the hash table
 * @ht: the hash table
 * @new_node: The node the be inserted
 *
 * Return: void
 */
static void
_shash_table_insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *cursor = NULL, *cursor_prev = NULL;

	cursor = ht->shead;

	while (cursor && strcmp(new_node->key, cursor->key) > 0)
	{
		cursor_prev = cursor;
		cursor = cursor->snext;
	}

	if (!cursor_prev)
	{
		new_node->snext = ht->shead;

		if (ht->shead)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;

		ht->shead = new_node;
		return;
	}

	new_node->snext = cursor;
	new_node->sprev = cursor_prev;
	cursor_prev->snext = new_node;

	if (cursor)
		cursor->sprev = new_node;
	else
		ht->stail = new_node;

}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int
shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new_node = NULL, *cursor = NULL;

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

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);

	new_node->snext = NULL;
	new_node->sprev = NULL;
	new_node->key = strdup(key);
	new_node->value = strdup(value);


	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* insert node in sorted list */
	_shash_table_insert_sorted(ht, new_node);

	return (1);
}


/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key of the new element
 *
 * Return: Return the key value or NULL if key couldn't be found
 */
char *
shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *cursor = NULL;

	if (!ht || !key || !(*key))
		return (NULL);

	cursor = ht->array[key_index((unsigned char *) key, ht->size)];

	while (cursor && strcmp(key, cursor->key) != 0)
		cursor = cursor->next;

	return (cursor ? cursor->value : NULL);
}

/**
 * shash_table_print - Prints a hash table sorted order
 * @ht: The hash table
 *
 * Return: void
 */
void
shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cursor = NULL;

	if (!ht)
		return;

	printf("{");

	cursor = ht->shead;

	if (cursor)
	{
		printf("'%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->snext;
	}

	while (cursor)
	{
		printf(", '%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a hash table in reverse sorted order
 * @ht: The hash table
 *
 * Return: void
 */
void
shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cursor = NULL;

	if (!ht)
		return;

	printf("{");

	cursor = ht->stail;

	if (cursor)
	{
		printf("'%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->sprev;
	}

	while (cursor)
	{
		printf(", '%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table
 *
 * Return: void
 */
void
shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cursor = NULL, *deleted = NULL;

	if (!ht)
		return;

	cursor = ht->shead;

	while (cursor)
	{
		deleted = cursor;
		cursor = cursor->snext;

		free(deleted->key);
		free(deleted->value);
		free(deleted);
	}

	free(ht->array);
	free(ht);
}
