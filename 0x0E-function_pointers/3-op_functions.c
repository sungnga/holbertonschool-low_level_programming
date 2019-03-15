#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first number in integer
 * @b: second number in integer
 * Return: the result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_add - returns the difference of a and b
 * @a: first number in integer
 * @b: second number in integer
 * Return: the result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - returns the product of a and b
 * @a: first number in integer
 * @b: second number in integer
 * Return: the result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_add - returns the remainder of the division of a and b
 * @a: first number in integer
 * @b: second number in integer
 * Return: the result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
                exit (100);
	}
	return (a / b);
}

/**
 * op_add - returns the sum of a and b
 * @a: first number in integer
 * @b: 2nd number in integer
 * Return: the result
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
                exit (100);
	}
	return (a % b);
}
