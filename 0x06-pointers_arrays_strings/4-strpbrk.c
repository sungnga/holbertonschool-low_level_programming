#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: char type
 * @accept: char type
 * i - integer type
 * j - integer type
 * Return: a pointer to the byte in s or NULL if no such byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
