#include "hash_tables.h"

/**
 * key_index - index of key
 *
 * @key: string key
 * @size: size of hash table
 * Return: index of node
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
