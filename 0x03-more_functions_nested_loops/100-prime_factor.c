#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * i - long type
 * num - long type
 * Return: 0 integer value
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
			num = num / i;
	}
	printf("%li\n", num);
	return (0);
}
