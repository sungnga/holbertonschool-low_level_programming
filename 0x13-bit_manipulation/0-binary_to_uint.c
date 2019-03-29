#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 & 1 char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		value = (value * 2) + (*b++ - '0');
	}
	return (value);
}
