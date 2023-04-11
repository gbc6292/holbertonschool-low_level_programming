#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - parameter on each element
 * @array: array integer to check
 * @size: size of the array
 * @action: function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (array == NULL || action == NULL)
		return;
	for (idx = 0; idx < size; idx++)
	{
		action(array[idx]);
	}
}
