#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: integer type
 * s - integer type
 * k - integer type
 */
void print_square(int size)
{
	int s;
	int k = size;

	if (size <= 0)
		_putchar('\n');
	else
		{
			while (size)
			{
				/* counting # of squares */
				for (s = 0; s < k; s++)
					_putchar('#');
				_putchar('\n');

				size--;
			}
		}
}
