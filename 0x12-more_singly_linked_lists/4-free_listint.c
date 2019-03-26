#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the first node of listint_t list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
