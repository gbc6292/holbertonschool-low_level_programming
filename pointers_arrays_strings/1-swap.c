#include "main.h"
/**
 * swap_int - switching the values of two intergers
 * @a: First pointer to be switch
 * @b: Second pointer to be switch
 * Return - N/a
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
