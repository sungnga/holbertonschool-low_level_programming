#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to old allocated memory
 * @old_size: size in bytes of allocated space for ptr in unassigned int type
 * @new_size: size in bytes of new memory block
 * Return: a pointer in char type
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		old_size = old_size;
	else
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		p[old_size] = ((char *)ptr)[old_size];

	free(ptr);
	return (p);
}
