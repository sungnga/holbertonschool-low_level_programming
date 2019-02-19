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
 * puts_half - prints half of a string, followed by a new line
 * @str: character type
 * i - integer type
 * len - integer type
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i <= len - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
