#include "main.h"
/**
 * jack_bauer - Printing every minute of the day
 * Return: void
 *
 */
void jack_bauer(void)
{
	int a, n, i, b;

	for (a = 0; a <= 2; a++)
	{
	for (n = 0; n <= 3; n++)
	{
	if ((a <= 1 && n <= 9) || (a <= 2 && n <= 3))
	{
	for (i = 0; i <= 5; i++)
	{
	for (b = 0; b <= 9; b++)
	{
	_putchar(a + '0');
	_putchar(n + '0');
	_putchar(58);
	_putchar(i + '0');
	_putchar(b + '0');
	}
	}
	}
	}
	}
}
