#include "main.h"
/**
 * print_rev - Printing a string in reverse
 * @s: Stting 
 * @len: Lenth of the string
 * Return: Result
 *
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	for (len -= 1; len >= 0; len--)
	{
	_putchar(s[len]);
	}
	_putchar('\n');
}
