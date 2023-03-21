#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: small intergers
 * @max: bigger integers
 * Return: A pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
	ptr[i] = min;
	i++;
	min++;
	}
	return (ptr);
}
