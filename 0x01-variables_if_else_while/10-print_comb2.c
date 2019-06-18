#include <stdio.h>

/**
 * main - prints all possibe different combinations of two digits
 * d1 - integer type for first digit
 * d2 - integer type for second digit
 * Return: a zero value
 */
int main(void)
{
	int d1;
	int d2;

	for (d1 = 0; d1 <= 98; d1++)
	{
		for (d2 = 0; d2 <= 99; d2++)
		{
			putchar((d1 / 10) + '0'));
		putchar((d2 % 10) + '0'));
			if ((d1 + d2) != 18)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
