#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: double pointer
 * @indx: index of the list where the new node should be added
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *ptr;
	unsigned int i;

	ptr = *head;

	for (i = 0; *head && index; i++)
	{
		if (!ptr)
			return (-1);
		if (i == index - 1)
			break;
		ptr = ptr->next;
	}
	if (index)
	{
		prev = ptr->next;
		free (ptr->next);
		ptr->next = prev;
	}
	else
	{
		*head = (*head)->next;
		free(ptr);
	}
	return (1);
}
