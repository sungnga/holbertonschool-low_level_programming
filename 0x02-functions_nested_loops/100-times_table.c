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

	if (n == 0)
	{
		_putchar(0 + '0');
		_putchar('\n');
	}
	if (n < 16 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(0 + '0');
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(',');
				_putchar(' ');
				if (c > 99)
				{
					_putchar((c / 100) + '0');
				}
				else
					_putchar(' ');
				if (c > 9)
				{
					_putchar(((c / 10) % 10) + '0');
				}
				else
					_putchar(' ');
				_putchar((c % 10) + '0');
			}
			_putchar('\n');

		}
	}
}
