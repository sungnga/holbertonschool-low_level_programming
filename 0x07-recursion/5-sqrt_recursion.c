#include "holberton.h"

/**
 * _helper - checks for square root of a number
 * @n: integer type
 * @i: integer type
 * Return: integer type
 */
int _helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i  == n)
		return (i);
	return (_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer type
 * Return: integer type
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_helper(n, 0));
}
