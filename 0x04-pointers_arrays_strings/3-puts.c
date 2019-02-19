#include "holberton.h"
#include <stdio.h>
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
