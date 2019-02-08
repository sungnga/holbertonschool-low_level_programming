#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * ch is a char type
 * Return: a zero value
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
