#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2-d arrays of integers
 * @width: width of array in int type
 * @height: height of array in int type
 * Return: a pointer in int type
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
