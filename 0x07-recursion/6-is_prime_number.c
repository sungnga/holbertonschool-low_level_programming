#include "holberton.h"

/**
 * check_prime - checks for a prime number
 * @n: integer type
 * @i: integer type
 * Return: integer type
 */
int check_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the integer is a prime num, otherwise return 0
 * @n: integer type
 * Return: value 1 or 0 of integer type
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}
