#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index the value is located, otherwise -1 if value not
 * present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, mid = 0, pos = 0;
	size_t high = size - 1;

	if (!array || size == 0)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		     (value - array[low]));
	if (pos > size - 1)
		printf("Value checked array[%li] is out of range\n", pos);

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
			     (array[high] - array[low]));

		printf("Value checked array[%li] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	return (-1);
}
