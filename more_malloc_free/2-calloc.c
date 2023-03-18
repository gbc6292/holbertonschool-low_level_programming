#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Array of elements
 * @size: Size of the allocated memory
 * Return: A Pointer to an allocated memory initialize as 0
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, l, z = 0;
	char *cal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(sizeof(unsigned int) * size + 1);
	if (cal == NULL)
		return (NULL);

	l = sizeof(cal);

	for (i = 0; i < l; i++)
		cal[i] = z;
	for (i = 0; i < l; i++)
		cal[i] = nmemb;
	return (cal);
}


