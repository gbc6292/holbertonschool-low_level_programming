#include "main.h"
/**
 * times_table - Print the 9 times table
 * Return: Void
 *
 */
void times_table(void)
{
	int a, r, e, t, o;

	for (a = 0; a <= 9; a++)
	{
	for (r = 0; r <= 9; r++)
	{
	e = a * r;
	if (e > 9)
	{
	t = e % 10;
	o = (e - t) / 10;
	_putchar(44);
	_putchar(46);
	_putchar(o + '0');
	_putchar(t + '0');
	}
	else
	{
	if (r != 0)
	{
	_putchar(44);
	_putchar(46);
	_putchar(46);
	}
	_putchar(e + '0');
	}
	}
	_putchar('\n');
	}
}


