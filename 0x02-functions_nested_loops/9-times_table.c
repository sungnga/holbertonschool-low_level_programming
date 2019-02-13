#include "holberton.h"

/**
 * times_table - prints the 9 times table
 * @void: does not return
 * a - integer type
 * b - interger type
 * c - integer type
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c >= 0 && c <= 9)
			{
				if (b != 0)
				_putchar(' ');
			}
			if (c >= 10)
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
