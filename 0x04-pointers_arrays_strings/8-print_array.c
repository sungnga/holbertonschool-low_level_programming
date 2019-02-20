#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integer, followed by a new
 * line
 * @a: integer type
 * @n: integer type
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
