#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct types - Struct types
 *
 * @s: character of types
 * @function: The function associated
 */
typedef struct types
{
	char *s;
	void (*function)(va_list list);
} list_types;

#endif /* VARIADIC_FUNCTIONS_H */
