#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: char type
 * i - integer type
 * j - integer type
 * flag - integer type
 * sep - char type
 * Return: char type
 */
char *cap_string(char *s)
{
	int i, j, flag;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		      '{', '}'};

	i = 0;
	flag = 1;
	while (s[i] != '\0')
	{
		if (flag == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		flag = 0;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
				flag = 1;
		}
		i++;
	}
	return (s);
}
