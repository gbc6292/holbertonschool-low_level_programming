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
	int c = *str;

	_putchar(c);
	_putchar('\n');
}
