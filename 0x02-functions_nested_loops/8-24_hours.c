#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * @void: no parameter
 * i - integer type
 * j - integer type
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
