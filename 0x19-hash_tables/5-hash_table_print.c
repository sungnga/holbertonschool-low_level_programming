#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: The hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i;
	int flag = 1;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (flag == 1)
				{
					printf("'%s': '%s'", current->key, current->value);
					flag = 0;
				}
				else
					printf(", '%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
		printf("}\n");
	}
}
