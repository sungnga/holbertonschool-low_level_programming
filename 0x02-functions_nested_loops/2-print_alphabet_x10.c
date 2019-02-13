#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase followed by
 * a new line
 * @void: do not return
 * ch is a char type
 * i is a integer type
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
