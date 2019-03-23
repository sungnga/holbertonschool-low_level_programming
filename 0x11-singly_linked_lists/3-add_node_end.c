#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a double pointer to head of list
 * @str: a pointer to string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
