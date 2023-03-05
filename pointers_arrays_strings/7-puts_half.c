#include "main.h"
/**
 * puts_half - Printing half of the string
 * @str: String to be print
 * Return: void
 *
 */
void puts_half(char *str)
{
	int g;
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 1)
	{
	g = (i - 1) / 2;
	g += 1;
	}
	else
	{
	g = i / 2;
	}

	for (; g< i; g++)
	{
	_putchar(str[g]);
	}
	_putchar('\n');
}
