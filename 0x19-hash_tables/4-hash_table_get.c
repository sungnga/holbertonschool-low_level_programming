#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the element, or NULL if key couldn’t
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *searchKey = NULL;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	searchKey = ht->array[idx];

	while (searchKey != NULL)
	{
		if (strcmp(key, searchKey->key) == 0)
			return (searchKey->value);
		searchKey = searchKey->next;
	}
	return (NULL);
}
