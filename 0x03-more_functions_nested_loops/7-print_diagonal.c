#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer type
 * i - integer type
 * k - integer type
 */
void print_diagonal(int n)
{
	int i;
	int k = 0;

	if (n <= 0)
		_putchar('\n');
	else
		{
			while (n)
			{
				/* counting # of spaces */
				if (k > 0)
				{
					for (i = 0; i < k; i++)
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');

			k++;
			n--;
			}

		}
}
