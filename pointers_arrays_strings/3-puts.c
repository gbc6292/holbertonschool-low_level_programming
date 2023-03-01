#include "main.h"
/**
 * _puts - Printing a string
 * @str: String to be print
 * Return: String
 */
void _puts(char *str)
{
	while (*str != '\0')
	_putchar(*str++);
	_putchar('\n');
}
