#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Function that free the allocated memomry
 * @grid: Allocated memory to be empty
 * @height: String allocated in the memory
 * Return: Void
 *
 */
void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}

	free(grid);
}
