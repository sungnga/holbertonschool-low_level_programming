#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: the array of the function being executed
 * @size: size of the array
 * @action: a pointer to the function to be executed
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
