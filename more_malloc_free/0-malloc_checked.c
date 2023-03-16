#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocate memory using malloc.
 * @b: The space of memory to be allocate
 * Return: void
 *
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);

	if (mal == NULL)
	{
		exit(98);
	}
	return (mal);
}
