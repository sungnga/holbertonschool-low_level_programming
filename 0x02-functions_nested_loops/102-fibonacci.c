#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * a - long type
 * b - long type
 * c - long type
 * i - long type
 * Return: 0 integer value
 */
int main(void)
{
	long a;
	long b;
	long c;
	long i;

	a = 1;
	b = 2;

	printf("%lu, %lu", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
