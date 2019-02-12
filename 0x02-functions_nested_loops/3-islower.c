#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * c - is an integer type
 * Return: 0 integer value
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
