#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: char type
 * Return: integer type
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return ((1) + _strlen_recursion(s + 1));
}

/**
 * palin_rev - checks to see if a string is a palindrome
 * @s: char type
 * @i: integer type
 * Return: integer type
 */
int palin_rev(char *s, int i)
{
	int len;

	len = _strlen_recursion(s) - 1;

	if (i == len)
		return (1);
	if (s[i] == s[len - i])
		return (palin_rev(s, i + 1));
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome, and 0 if not
 * @s: char type
 * Return: value 1 or 0 of integer type
 */
int is_palindrome(char *s)
{
	if (*s < 0)
		return (0);
	return (palin_rev(s, 0));
}
