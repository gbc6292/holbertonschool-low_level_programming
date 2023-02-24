#include "main.h"
/**
 * print_alphabet_x10 - Printing alphabet 10 times
 * Return: return in void
 *
 */
void print_alphabet_x10(void)
{
	char g;
	int i;

	while (i <= 9)
	{
	for (g = 'a'; g <= 'z'; g++)
	{
	_putchar(g);
	}
	_putchar('\n');
	i++;
	}
}
