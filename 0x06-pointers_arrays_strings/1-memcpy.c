#include "holberton.h"

/**
 * _memcpy - copies memory area
 * _memset() - funct copies n bytes from memory area src to memory area dest
 * @dest: char type
 * @src: char type
 * @n: unsigned int type
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cdest = dest;
	char *csrc = src;

	while (n)
	{
		*(cdest++) = *(csrc++);
		n--;
	}

	return (dest);
}
