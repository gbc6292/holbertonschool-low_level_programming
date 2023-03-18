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
	unsigned int i, l;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;

	c = malloc(l);
	if (c == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		c[i] = 0;

	return (c);
}
