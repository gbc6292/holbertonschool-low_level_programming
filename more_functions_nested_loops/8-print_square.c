#include "main.h"
/**
 * print_square - Print a square
 * @size: Size of the square
 * Return: No return
 *
 */
void print_square(int size)
{
	int g, i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (g = 0; g < size; g++)
	{
	for (i = 0; i < size; i++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

