#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: integer type
 * Return: r integer value
 */

int print_last_digit(int r)
{
	r = (r % 10);
	if (r < 0)
		r = (r * -1);
	_putchar(r + '0');
	return (r);
}
