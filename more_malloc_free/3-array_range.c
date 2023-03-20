#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: small intergers
 * @maz: bigger integers
 * Return: A pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * max + 1);
	if (ptr == NULL)
		return (NULL);


	for (i = 0; i <= max; i++)
	{
		ptr[i] = min++;
	}
	ptr[max] = max;
	return (ptr);
}
