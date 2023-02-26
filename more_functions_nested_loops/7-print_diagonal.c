#include "main.h"
/**
 * print_diagonal - Printing a diagonal line
 * @n: Viariable to print the quantitiy of lines
 * Return: Void
 *
 */
void print_diagonal(int n);
{
	int g, o;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (g = 0; g < n; g++)
	{
	for (o = 0; o < g; o++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
