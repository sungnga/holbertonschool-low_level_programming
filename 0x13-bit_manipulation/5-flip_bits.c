#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number of bits
 * @m: second number of bits
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	/* XOR n and m and stored it in n */
	n = n ^ m;

	while (n)
	{
		/* if the result of n is 1, iterate the count*/
		if (n & 1 != 0)
			i++;
		/* shift to the next digit */
		n = n >> 1;
	}
	return (i); /* returns total number of flips */
}
