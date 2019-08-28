#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index the value is located, otherwise -1 if value not
 * present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t max = size - 1;
	size_t min = 0;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (max >= min)
	{
		mid = (max + min) / 2;
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i != max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[max]);

		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			max = mid - 1;
		else
			min = mid + 1;
	}
	return (-1);
}
