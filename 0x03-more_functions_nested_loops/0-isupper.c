#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer type
 * Return: 0 integer value
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
