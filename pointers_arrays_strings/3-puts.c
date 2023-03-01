#include "main.h"
/**
 * _puts - Printing a string
 * @str: String to be print
 * c: Str to be print
 * d: converting a pointer to an int
 * Return: String
 */
void _puts(char *str)
{
	int c = 0;
	char d = *str;

	while (d++)
	{
	_putchar(d);
	}
	c++;
	_putchar('\n');
}
