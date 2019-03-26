#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: a double pointer to head of list
 * @n: constant integer type
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (n)
		new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
        return (new_node);
}
