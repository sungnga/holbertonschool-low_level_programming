#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\n), to the buffer pointed to by dest
 * @dest: character type
 * @src: character type
 * Return: character value type
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}
