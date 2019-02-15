#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * i - long type
 * num - long type
 * j - long type
 * Return: 0 integer value
 */
int main(void)
{
	long i = 2;
	long n = 612852475143;

	while (i < n)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
		i++;
	}

	printf("%li\n", n);
	return (0);
}
