#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer type
 * @b: integer type
 * c - integer type
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
