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
	long i;
	long num = 612852475143;
	long j;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
			num = num / i;
	}
	if (i > (j = 2))
		j = i;
	printf("%li\n", i);
	return (0);
}
