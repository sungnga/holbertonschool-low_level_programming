#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * argstostr - concatenates all the arguments in a program
 * @ac: argument counter in int type
 * @av: a pointer of char type to an array that contains the arguments
 * Return: a pointer to a new string in char type
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int concat = 0;
	int len = 0;
	char *ptr;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (j = 0; j < len; j++, concat++)
			ptr[concat] = av[i][j];
		ptr[concat++] = '\n';
	}
	ptr[concat] = '\0';
	return (ptr);
}


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
