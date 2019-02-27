#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix of int
 * @a: integer type
 * @size: integer type
 * i - integer type
 * sum1 - integer type
 * sum2 - integer type
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[((size + 1) * i)];
		sum2 = sum2 + a[((size - 1) * (i + 1))];
	}
	printf("%i, %i\n", sum1, sum2);
}
