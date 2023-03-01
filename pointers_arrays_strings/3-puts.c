#include "main.h"
/**
 * _puts - Printing a string
 * @str: String to be print
 * c: lenght
 * Return: String
 */
void _puts(char *str)
{
	int c = 0;

	while (*str++)
	{
	_putchar(*str);
	}
	c++;
	_putchar('\n');
}
