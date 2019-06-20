#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order using the
 * Counting sort algorithm
 * @array: Pointer to list of integers
 * @size: Size of the array
 *
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
	int i, j, range, sum_count = 0; max = 0, input_size = size;
	int *output = NULL, *count = NULL;

	if (!array || input_size < 2)
		return;
	/* Find max value */
	for (i = 0; i < input_size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	range = max + 1;
	count = malloc(range * sizeof(int));
	for (i = 0; i < range; i++)
		count[i] = 0;
	/* Loop thru count array */
	for (i = 0; i < range; i++)
	{
		/* Loop thru given list */
		for (j = 0; j < input_size; j++)
		{
			if (i == array[j])
				count[i] =+ 1;
		}
	}
	/* Loop thru count array and update the sum of occurences */
	for (i = 1; i < range; i++)
		count[i] += count[i - 1];
	print_array(count, range);
	/* Loop thru output array and update with the sorted list */
	for (i = 0; i < input_size; i++)
	{
		sum_count = count[array[i]];
		output[sum_count - 1] = array[i];
		count[array[i]]--;
	}
	for (i = 0; i < input_size; i++)
		array[i] = output[i];
	free(count);
	free(output);
}
