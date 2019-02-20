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
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\n), to the buffer pointed to by dest
 * @dest: character type
 * @src: character type
 * i - integer type
 * len - integer type
 * Return: character value type
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = _strlen(src);

	for (i = 0; i <= len - 1; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
