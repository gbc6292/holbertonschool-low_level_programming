#include "main.h"
/**
 * reverse_array - reverses content
 * @a: vairable
 * @n: variable
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b, c;
	int temp;
	int g;

	for (b = 0, c = n - 1; b < c; b++, c--)
	{
	temp = a[b];
	g = a[b];
	a[b] = a[c];
	a[c] = temp;
	a[c] = g;
	}
}
