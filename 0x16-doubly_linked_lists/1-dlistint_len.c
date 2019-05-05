#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 *
 *@h: Pointer to first node in linked list
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
