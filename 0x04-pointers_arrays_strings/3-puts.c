#include "holberton.h"

int _strlen(char *s);
/**
 * _strlen - returns the length of a string
 * @s: character type
 * i - integer type
 * Return: integer type
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: character type
 * i - integer type
 * len - integer type
 */
void _puts(char *str)
{
	int len - 1;
	int i;

	len = _strlen(str);
	for (i = 0; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
