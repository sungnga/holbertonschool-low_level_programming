#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list
 * @head: a pointer to head
 * @index: the index of the node
 * Return: value at nth index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
