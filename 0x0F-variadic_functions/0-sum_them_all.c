#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the first argument of the parameter
 * Return: the result in integer type
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	/* initialize numlist for n number of arguments */
	va_start(ap, n);

	if (n == 0)
		return (0);

	/* access all the arguments assigned to numlist */
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	/* clean memory reserved for numlist */
	va_end(ap);

	return (sum);
}
