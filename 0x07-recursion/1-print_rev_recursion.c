#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line
 * @s: char type
 * Return: a void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
