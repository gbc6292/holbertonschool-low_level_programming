#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Function that return a Pointer of a 2 dimensional arrays
 * @width: String in the X dimension
 * @height: String in the Y dimension
 * Return: Pointer with 2 dimensional arrays or NULL if failure
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid, x, y, idx;

	grid = malloc(height * sizeof(int));

	for (idx = 0; idx < height; idx++)
	{
		grid[idx] = malloc(width * sizeof(int));
		if (grid[idx] == NULL)
		{
			while (idx >= 0)
			{
			free(grid[idx]);
			idx--;
			}
		free(grid);
		return (NULL);
		}
	}
	for (y = 0; y <= height; y++)
	{
		for (x = 0; x <= width; x++)
		{
			grid[y][x] = 0;
		}
		return (grid);
	}
	return (grid);
}
