#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: double pointer
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head; /* Store head node */
	listint_t *next; /* Store ptr to next of node to be deleted */
	unsigned int i;

	/* If linked list is empty */
	if (*head == NULL)
		return (-1);

	/* If head needs to be removed */
	if (index == 0)
	{
		*head = temp->next; /* Change head */
		free(temp); /* Free old head */
		return (1);
	}

	/* Find previous node of the node to be deleted */
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}

	/* If position is more than number of nodes */
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next; /* Node temp->next is node to delete */

	/* Unlink the node from linked list */
	free(temp->next); /* Free memory */
	temp->next = next; /* Unlink the deleted node from list */
	return (1);
}
