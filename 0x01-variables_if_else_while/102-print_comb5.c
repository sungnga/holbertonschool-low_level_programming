#include <stdio.h>

/**
 * main - prints all possibe different combinations of two digits
 * i - integer type for first digit
 * j - integer type for second digit
 * k - interger type for third digit
 * Return: a zero value
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 6; i++)
	{
		for (j = i + 1; j <= 7; j++)
		{
			for (k = j + 1; k <= 8; k++)
			{
				for (l = k + 1; l <= 9; j++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i != 6)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
