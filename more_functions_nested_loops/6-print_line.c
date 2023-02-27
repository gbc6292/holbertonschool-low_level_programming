#include "main.h"
/**
 * print_line - Printing a straigth line
 * @n: Variable to print
 * Return: return in result
 *
 */
void print_line(int n)
{
	int o;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (o = 0; o < n; o++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
