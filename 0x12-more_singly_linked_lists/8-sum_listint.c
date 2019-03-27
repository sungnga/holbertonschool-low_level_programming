#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list
 * @head: pointer
 * Return: sum of all the values n
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
