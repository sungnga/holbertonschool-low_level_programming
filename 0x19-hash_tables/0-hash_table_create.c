#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: A pointer of array to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	hash_node_t **array;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	array = malloc(size * sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = array;
	return (new_ht);
}
