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
 * rev_string - reverses a string
 * @s: character type
 * i - integer type
 * len - integer type
 */
void rev_string(char *s)
{
	int i;
	int len = _strlen(s);
	char *begin, *end;
	char ch;
	int a;
	int b;

	begin = s;
	end = s;
	for (i = 0; i < len - 1; i++)
		end++;

	a = 0;
	b = len - 1;
	while (a < b)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;

		a++;
		b--;
	}
}
