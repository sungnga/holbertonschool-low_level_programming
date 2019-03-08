#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string in char type
 * @s2: second string in char type
 * i - integer type
 * j - integer type
 * s3 - new string that contains s1 and s2
 * Return: a pointer in char type
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	s3 = malloc(sizeof(char) * (i + j) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
