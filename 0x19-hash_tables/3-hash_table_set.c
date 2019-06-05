#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key and it can not be an empty string
 * @value: The value associated with the key. Value must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *item = NULL;
	unsigned long int idx;

	if (!ht || !key || !value)
		return (0);
	idx = key_index(((const unsigned char *)key), ht->size);
	item = ht->array[idx];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			if (!item->value)
				return (0);
			return (1);
		}
		item = item->next;
	}
	/* Add new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
