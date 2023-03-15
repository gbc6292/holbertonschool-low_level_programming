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
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i <= height; i++)
	{
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
