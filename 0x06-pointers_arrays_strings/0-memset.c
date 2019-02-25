#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * The _memset() - funct fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s: char type
 * @b: char type
 * @n: unsigned int type
 * i - integer type
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
