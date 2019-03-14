#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array the function pointer is pointing to
 * @size: size of the array
 * @cmp: function pointer to index of an array
 * Return: index of the array element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || !size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
