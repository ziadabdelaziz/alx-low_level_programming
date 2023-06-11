#include "hash_tables.h"

/**
 * duplicate_string - duplicates a string

 * value: the string to duplicate
 * Return: string duplicate
 */
char *duplicate_string(const char *value)
{
	unsigned long int size = 0;
	unsigned long int i = 0;
	char *new_string = NULL;

	for ( ; value[i] != '\n'; i++)
		size++;

	new_string = malloc(size + 1);
	if (new_string == NULL)
		return (NULL);

	for (i = 0; value[i] != '\n'; i++)
		new_string[i] = value[i];

	return (new_string);
}

/**
 * hash_table_set - add/update element
 *
 * @ht: hash table
 * @key: string
 * @value: string
 * Return: 1 if successful 1 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size;
	char *duplicated_value = NULL;
	char *duplicated_key = NULL;
	unsigned long int index = 0;
	hash_node_t *new = NULL, *cur = NULL;

	if (key == NULL)
		return (0);
	index = key_index((unsigned char *)key, size);

	duplicated_value = duplicate_string(value);
	if (duplicated_value == NULL)
		return (0);

	for (cur = ht->array[index];  cur != NULL; cur++)
		if (cur->key == key)
		{
			cur->value = duplicated_value;
			return (1);
		}
	
	duplicated_key = duplicate_string(key);
	if (duplicated_key == NULL)
		return (0);
	
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(duplicated_value);
		free(duplicated_key);
		return (0);
	}

	new->key = duplicated_key;
	new->value = duplicated_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
