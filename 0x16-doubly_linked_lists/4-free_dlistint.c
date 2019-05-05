#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to first node in linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
