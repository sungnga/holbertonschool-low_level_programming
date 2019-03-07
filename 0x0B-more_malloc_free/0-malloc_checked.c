#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer type
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	unsigned int status = 98;

	p = malloc(b);
	if (p == NULL)
		exit(status);
	return (p);
}
