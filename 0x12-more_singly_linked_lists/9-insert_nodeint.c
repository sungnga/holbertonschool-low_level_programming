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

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	ptr = *head;
	for (i = 0; *head && idx; i++)
	{
		if (!ptr)
			return (NULL);
		if (i == idx)
			break;
		ptr = ptr->next;
	}
	if (idx != 0)
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
