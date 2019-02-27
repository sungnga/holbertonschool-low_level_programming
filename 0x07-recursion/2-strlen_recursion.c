#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: char type
 * Return: integer type
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		_putchar('\n');
	}
	else
		return ((1) + _strlen_recursion(s + 1));
}
