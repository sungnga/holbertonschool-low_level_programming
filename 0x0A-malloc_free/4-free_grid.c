#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2d grid arrays
 * @grid: address of a 2d grid in int type
 * @height: height of the grid in int type
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

	if (grid == NULL || grid == 0)
		return ;
}
