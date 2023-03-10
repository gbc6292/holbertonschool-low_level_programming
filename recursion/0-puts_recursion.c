#include "main.h"

/**
 * _puts_recursion - Function that print a string with recursion
 * @s: String to be printed
 * Return: Void
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
