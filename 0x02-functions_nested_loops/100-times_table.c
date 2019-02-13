#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer type
 * a - integer type
 * b - integer type
 * c - integer type
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c >= 0 && c <= 9)
				{
					if (b != 0)
						_putchar(' ');
				}
				if (c >= 10)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');

		}
	}
}
