#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memomory of 2 dimensional array
 * @grid: grid parameter
 * @height: height parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL && height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}

