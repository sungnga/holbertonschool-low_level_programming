#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 * @size: unsigned integer type
 * @c: char type
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; ++i)
		new_arr[i] = c;
	return (new_arr);
}
