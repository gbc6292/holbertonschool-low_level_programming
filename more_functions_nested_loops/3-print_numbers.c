#include "main.h"
/**
 * print_numbers - Printing number from 0 to 9
 * Return: Always end in 0
 *
 */
void print_numbers(void)
{
	int g;

	for (g = 0; g <= 9; g++)
	{
	_putchar(g + '0');
	}
	_putchar('\n');
}
