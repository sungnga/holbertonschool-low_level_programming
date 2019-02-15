#include "holberton.h"

/**
 * print_triangle - prints a square, followed by a new line
 * @size: integer type
 * hash - integer type
 * space - integer type
 * i - integer type
*/
void print_triangle(int size)
{
	int hash = 1;
	int space = size - 1;
	int i;

	if (size <= 0)
		_putchar('\n');
	else
		{
			while (size)
			{
				/* counting # of hashes */
				for (i = 0; i < space; i++)
					_putchar(' ');

				/* counting # of spaces */
				for (i = 0; i < hash; i++)
					_putchar('#');
				_putchar('\n');

				space--;
				hash++;
				size--;
			}
		}
}
