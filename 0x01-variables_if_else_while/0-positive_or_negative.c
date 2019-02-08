#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether n int type is positive or negative
 * n - an integer type
 * Return: a zero value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
