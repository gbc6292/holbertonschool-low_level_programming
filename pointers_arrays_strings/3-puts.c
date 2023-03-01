#include "main.h"
/**
 * _puts - Printing a string
 * @str: String to be print
 * c: Str to be print
 * Return: String
 */
void _puts(char *str)
{
	int c;

	for (c = 0; c <= *str; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
