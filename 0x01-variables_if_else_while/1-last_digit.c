#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints random number and prints the last digit
 * n is an integer type
 * a is an integer type
 * Return: a zero value
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	a = n % 10;
	if (a > 5)
		printf("%d and is greater than 5\n", a);
	if (a == 0)
		printf("%d and is 0\n", a);
	if (a < 6 && a != 0)
		printf("%d and is less than 6 and not 0\n", a);
return (0);
}
