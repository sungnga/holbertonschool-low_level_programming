#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the first node of list_t list
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (h != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
