#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min of an array in integer type
 * @max: max of an array in integer type
 * ptr - pointer to the new array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int len = (max - min) + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
