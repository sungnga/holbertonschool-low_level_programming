#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: integer type
 * Return: 0 or 1 integer value
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
