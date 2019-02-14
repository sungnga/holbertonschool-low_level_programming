#include <stdio.h>

/**
 * main - computes and print the sum of all the multiples of 3 or 5 but
 * below 1024
 * num - integer type
 * sum - integer type
 * Return: 0 integer value
 */
int main(void)
{
	int num;
	int sum;

	for (num = 0; num <= 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
