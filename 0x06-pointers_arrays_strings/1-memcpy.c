#include "holberton.h"

/**
 * _memcpy - copies memory area
 * The _memset() - funct copies n bytes from memory area src to memory area dest
 * @dest: char type
 * @src: char type
 * @n: unsigned int type
 * i - integer type
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cdest = dest;
	char *csrc = src;
/*	unsigned int i; */

	while (n)
	{
		*(cdest++) = *(csrc++);
		n--;
	}
/*	for (i = 0; i < n; i++)
	dest[i] = '\n'; */
	return (dest);
}
