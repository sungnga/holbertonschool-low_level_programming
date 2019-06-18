#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the address of the first node in linked list
 * @idx: the index of the list where the new node should be added.
 *  Index starts at 0
 * @n: integer to store in new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count;


	current = (*h);
	count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->prev = current->prev;
	current->prev = new_node;
	new_node->next = current;

	if (new_node->prev != NULL)
	{
		new_node->prev->next = new_node;
	}
	else
		(*h) = new_node;

	while (current)
	{
	
		if (count == idx)
			return (current);
		count++;
		current = current->next;

	}
	return (NULL);
}
