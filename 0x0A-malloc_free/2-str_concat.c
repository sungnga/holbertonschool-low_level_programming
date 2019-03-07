#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1 in char type
 * @s2: string 2 in char type
 * s3 - string 2 in char type
 * i - integer type
 * j - integer type
 * Return: a pointer to the newly allocated space in memory new contents
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s3 = malloc(sizeof(char) * (i + j) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
