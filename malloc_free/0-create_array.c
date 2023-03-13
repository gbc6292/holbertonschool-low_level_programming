#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars.
 * @size: Size of the string
 * @c: Stirng
 * Return: 0
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	unsigned int idx;

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		ptr[idx] = c;
	}
	return (ptr);
}
