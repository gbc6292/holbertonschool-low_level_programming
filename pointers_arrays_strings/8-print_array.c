#include "main.h"
#include <stdio.h>
/**
 * print_array - Printing n elements of an array of integers
 * @a: Array of int
 * @n: Elements to be printed
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
	printf("%d", a[g]);
	if (g != (n - 1))
	{
	printf(",  ");
	}
	}
	printf("\n");
}
