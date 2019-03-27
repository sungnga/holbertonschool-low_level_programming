#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	ptr = *head;

	for (i = 0; *head && idx; i++)
	{
		if (!ptr)
			return (NULL);
		if (i == idx - 1)
			break;
		ptr = ptr->next;
	}
	new_node->n = n;
	if (idx)
	{
		new_node->next = ptr->next;
		ptr->next = new_node;
	}
	else
	{
		new_node->next = ptr;
		*head = new_node;
	}
	return (new_node);
}
