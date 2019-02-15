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
	long j = 2;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
			num = num / i;
	}
	if (i > j)
		j = i;
	printf("%li\n", j);
	return (0);
}
