#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: A string
 * @size: The size of the array of the hash table
 *
 * Return: An integer
 */
unsigned long int
key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

