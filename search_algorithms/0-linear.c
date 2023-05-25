#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: Amount of elements in the array
 * @value: Value to search in
 * Retrun: The first index where value is located or -1 if value is not 
 * located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);

	}
	return (-1);
}
