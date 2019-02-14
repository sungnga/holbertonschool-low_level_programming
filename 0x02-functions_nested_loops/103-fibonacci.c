#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms whose values do not exceed
 *4,000,000
 *
 * a - long type
 * b - long type
 * c - long type
 * i - long type
 * Return: 0 integer value
 */
int main(void)
{
	int older;
	int old;
	int cur;
	int  num;
	int sum = 2;

	older  = 1;
	old  = 2;

	for (num = 0; num <= 30; num++)
	{
		cur = older + old;
		if (cur % 2 == 0)
			sum = sum + cur;
		older = old;
		old = cur;
	}

	printf("%d\n", sum);
	return (0);
}
