#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer type
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
