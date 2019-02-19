#include "holberton.h"
#include <stdio.h>

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
 */
void _puts(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	for (i = 0; i <= len; i++)
		printf("%c", str[i]);
	printf("\n");
}
