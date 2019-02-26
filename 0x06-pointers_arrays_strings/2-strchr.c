#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: char type
 * @c: char type
 * i - integer type
 * Return: a pointer of char c or 0 integer value if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
		return (0);
}
