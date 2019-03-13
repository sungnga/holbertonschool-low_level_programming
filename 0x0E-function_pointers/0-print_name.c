#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer function to print to
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
