#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: a pointer to the string to be printed btw numbers
 * @n: the number of strings passed to the function
 * Return: a string from arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strp;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		strp = va_arg(ap, char *);
		if (strp == NULL)
			printf("(nil)");
		else
			printf("%s", strp);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
