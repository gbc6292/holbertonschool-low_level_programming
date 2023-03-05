#include "main.h"
/**
 * puts2 - printing other characters of the string
 * @str: The string of reference
 * Return: void
 *
 */

void puts3(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
	b++;
	}

	for (a = 0; 1 < b; a += 2)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
