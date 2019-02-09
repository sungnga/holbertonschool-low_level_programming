#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * i is integer type
 * Return: a zero value
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (i = 0; i <= 5; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');
	return (0);
}
