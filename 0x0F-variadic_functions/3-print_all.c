#include "variadic_functions.h"

void ptr_char(va_list list);
void ptr_int(va_list list);
void ptr_float(va_list list);
void ptr_string(va_list list);

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: a list of
 */
void print_all(const char * const format, ...)
{
	list_types array[] = {
		{"c", ptr_char},
		{"i", ptr_int},
		{"f", ptr_float},
		{"s", ptr_string},
		{NULL, NULL}
	};

	int i, j;
	va_list list;
	va_start(list, format);
	char *separator = "";

       	i = 0;
	while (format[i])
	{
		j = 0;
		while (array[j].s)
		{

			if (format[i] == *array[j].s)
			{
				printf("%s", separator);
				array[j].function(list);
				separator = ", ";
			}
			j++;
		}

		i++;
	}
	printf("\n");
	va_end(list);
}

/**
 * op_mul - returns the product of a and b
 * @a: first number in integer
 * @b: second number in integer
 * Return: the result
 */
void ptr_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void ptr_int(va_list list)
{
        printf("%i", va_arg(list, int));
}

void ptr_float(va_list list)
{
        printf("%f", va_arg(list, double));
}

void ptr_string(va_list list)
{
	if (list != NULL)
	{
		printf("%s", va_arg(list, char*));
		return;
	}
	printf("(nil)");
}
