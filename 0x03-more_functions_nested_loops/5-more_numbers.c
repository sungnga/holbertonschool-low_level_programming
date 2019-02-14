#include "holberton.h"

/**
 * more_numbers - prints 10x the numbers from 0 to 14, followed by
 * a new line
 *
 * t - integer type
 * i - integer type
 * @void: no return
 */
void more_numbers(void)
{
	int i;
	int t;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
