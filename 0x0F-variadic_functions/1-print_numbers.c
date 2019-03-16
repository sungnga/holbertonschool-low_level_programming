#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: a pointer to the string to be printed btw numbers
 * @n: the number of integers passed to the function
 * Return: the list of values from arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, unsigned int));
		if (i < n - 1)
			printf("%s", separator);
	       	}
	printf("\n");
	va_end(ap);
}
