#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double point of head
 * Return: the head note's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (!head)
		return (0);
	if (*head)
	{
		n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
       	}
	return (n);
}
