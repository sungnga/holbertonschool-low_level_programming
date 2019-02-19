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
 * puts2 - prints one char out of 2 of a string, followed by a new line
 * @str: character type
 * i - integer type
 * len - integer type
 */
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i <= len - 1; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
