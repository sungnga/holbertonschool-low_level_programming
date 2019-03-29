#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the bit being evaluation
 * @index: the index starting from 0 of the bit we want to manipulate
 * Return: 1 if it works or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
