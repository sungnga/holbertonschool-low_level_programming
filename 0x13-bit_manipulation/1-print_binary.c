#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: a number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int counter = 0;
	/* to get 63 bits, starting from 0 bit */
	int bit = (sizeof(n) * 8) - 1;

	if (n == 0)
		_putchar('0');
	while (bit >= 0)
	{
/* n = binary representation & bit shifted by this amt of bits*/
		if (n >> bit & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
		/* to get to bits below 63 bit */
		bit--;
	}
}
