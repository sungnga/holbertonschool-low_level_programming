#include "holberton.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * i - integer type
 * @void: no return
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
		_putchar('\n');
}
