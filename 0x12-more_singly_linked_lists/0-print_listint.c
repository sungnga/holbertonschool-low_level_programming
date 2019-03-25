#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to nodes of a linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
