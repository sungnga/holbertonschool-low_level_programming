#include <stdio.h>

/**
 * main - prints all possibe different combinations of two digits
 * i - is an integer type
 * Return: a zero value
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
